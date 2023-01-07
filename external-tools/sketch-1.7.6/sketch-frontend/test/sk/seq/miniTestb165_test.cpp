#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb165.h"

using namespace std;

void too_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x_0;
    x_0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x_0="<<x_0<<endl;
    }
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
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
      ANONYMOUS::foo(x_0,y,_out_outsk);
      ANONYMOUS::too(x_0,y,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in too_ANONYMOUSTest\n");
      cout<<"x_0 = "<<x_0<<endl;
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
  too_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb165\n");
  return 0;
}
