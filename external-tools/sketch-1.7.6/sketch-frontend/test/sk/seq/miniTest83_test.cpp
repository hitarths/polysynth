#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest83.h"

using namespace std;

void count_sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(8==0){ continue; }
    bool*  a_0= new bool [8];
    for(int _i_=0;_i_<8;_i_++) {
      a_0[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a_0=[";
      for(int _i_=0;_i_<8;_i_++) {
        cout<<a_0[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  _out_outsk;
    int  _out_outsp;
    _out_outsk=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsk="<<_out_outsk<<endl;
    }
    _out_outsp=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsp="<<_out_outsp<<endl;
    }
    try{
      ANONYMOUS::count(a_0,_out_outsk);
      ANONYMOUS::count_sk(a_0,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in count_sk_ANONYMOUSTest\n");
      cout<<"a_0 = "<<printArr(a_0, 8)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] a_0;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  count_sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest83\n");
  return 0;
}
