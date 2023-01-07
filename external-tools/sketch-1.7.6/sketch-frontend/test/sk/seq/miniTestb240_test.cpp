#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb240.h"

using namespace std;

void stenSK14_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  a;
    a=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    if(N * N==0){ continue; }
    float*  in= new float [N * N];
    for(int _i_=0;_i_<N * N;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<in[_i_]<<", ";
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
      ANONYMOUS::sten14(N,a,in,_out_outsk);
      ANONYMOUS::stenSK14(N,a,in,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N * N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in stenSK14_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"in = "<<printArr(in, N * N)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N * N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N * N)<<endl;
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
  stenSK14_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb240\n");
  return 0;
}
