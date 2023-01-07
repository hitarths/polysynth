#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest87.h"

using namespace std;

void count_sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(2==0){ continue; }
    bool*  a= new bool [2];
    for(int _i_=0;_i_<2;_i_++) {
      a[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    bool  _out_outsk;
    bool  _out_outsp;
    _out_outsk=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsk="<<_out_outsk<<endl;
    }
    _out_outsp=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsp="<<_out_outsp<<endl;
    }
    try{
      ANONYMOUS::count(a,_out_outsk);
      ANONYMOUS::count_sk(a,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in count_sk_ANONYMOUSTest\n");
      cout<<"a = "<<printArr(a, 2)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] a;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  count_sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest87\n");
  return 0;
}
