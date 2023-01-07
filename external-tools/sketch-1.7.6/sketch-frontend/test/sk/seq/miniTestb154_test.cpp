#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb154.h"

using namespace std;

void moo_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    bool  x;
    x=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    bool  y;
    y=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
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
      ANONYMOUS::foo(x,y,_out_outsk);
      ANONYMOUS::moo(x,y,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in moo_ANONYMOUSTest\n");
      cout<<"x = "<<x<<endl;
      cout<<"y = "<<y<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  moo_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb154\n");
  return 0;
}
