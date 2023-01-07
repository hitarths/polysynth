#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb200.h"

using namespace std;

void main_fun_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    bool  a;
    a=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    bool  b;
    b=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"b="<<b<<endl;
    }
    bool  c;
    c=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"c="<<c<<endl;
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
      ANONYMOUS::VOID(a,b,c,_out_outsk);
      ANONYMOUS::main_fun(a,b,c,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in main_fun_ANONYMOUSTest\n");
      cout<<"a = "<<a<<endl;
      cout<<"b = "<<b<<endl;
      cout<<"c = "<<c<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main_fun_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb200\n");
  return 0;
}
