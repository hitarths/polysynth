#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest66.h"

using namespace std;

void p1Sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    bool*  x= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      x[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<x[_i_]<<", ";
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
      ANONYMOUS::spec(x,_out_outsk);
      ANONYMOUS::p1Sk(x,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in p1Sk_ANONYMOUSTest\n");
      cout<<"x = "<<printArr(x, 5)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  p1Sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest66\n");
  return 0;
}
