#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb160.h"

using namespace std;

void test_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  a;
    a=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    int  b;
    b=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"b="<<b<<endl;
    }
    int  c;
    c=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"c="<<c<<endl;
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
      ANONYMOUS::spec(a,b,c,_out_outsk);
      ANONYMOUS::test(a,b,c,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in test_ANONYMOUSTest\n");
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
  test_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb160\n");
  return 0;
}
