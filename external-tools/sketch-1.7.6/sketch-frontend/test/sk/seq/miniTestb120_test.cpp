#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb120.h"

using namespace std;

void SKrouter_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  dest_port;
    dest_port=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"dest_port="<<dest_port<<endl;
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
      ANONYMOUS::router(dest_port,_out_outsk);
      ANONYMOUS::SKrouter(dest_port,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in SKrouter_ANONYMOUSTest\n");
      cout<<"dest_port = "<<dest_port<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  SKrouter_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb120\n");
  return 0;
}
