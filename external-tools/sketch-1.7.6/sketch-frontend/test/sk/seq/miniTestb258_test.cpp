#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb258.h"

using namespace std;

void testSK4_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  in= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      in[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N==0){ continue; }
    int*  _out_outsk= new int [N];
    if(N==0){ continue; }
    int*  _out_outsp= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<N;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test4(N,in,_out_outsk);
      ANONYMOUS::testSK4(N,in,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in testSK4_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"in = "<<printArr(in, N)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N)<<endl;
        exit(1);
      }
    }
    delete[] in;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  testSK4_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb258\n");
  return 0;
}