#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb250.h"

using namespace std;

void testSK0_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N * N==0){ continue; }
    float*  a= new float [N * N];
    for(int _i_=0;_i_<N * N;_i_++) {
      a[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N * N==0){ continue; }
    float*  _out_outsk= new float [N * N];
    if(N * N==0){ continue; }
    float*  _out_outsp= new float [N * N];
    for(int _i_=0;_i_<N * N;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<N * N;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test0(N,a,_out_outsk);
      ANONYMOUS::testSK0(N,a,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N * N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in testSK0_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"a = "<<printArr(a, N * N)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N * N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N * N)<<endl;
        exit(1);
      }
    }
    delete[] a;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  testSK0_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb250\n");
  return 0;
}
