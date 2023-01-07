#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb369.h"

using namespace std;

void foo_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  ar_0= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      ar_0[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"ar_0=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<ar_0[_i_]<<", ";
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
      ANONYMOUS::zzzz(N,ar_0,_out_outsk);
      ANONYMOUS::foo(N,ar_0,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in foo_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"ar_0 = "<<printArr(ar_0, N)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N)<<endl;
        exit(1);
      }
    }
    delete[] ar_0;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb369\n");
  return 0;
}
