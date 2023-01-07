#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb152.h"

using namespace std;

void sketch_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    bool  in;
    in=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"in="<<in<<endl;
    }
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
      ANONYMOUS::spec(in,a,b,_out_outsk);
      ANONYMOUS::sketch(in,a,b,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in sketch_ANONYMOUSTest\n");
      cout<<"in = "<<in<<endl;
      cout<<"a = "<<a<<endl;
      cout<<"b = "<<b<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb152\n");
  return 0;
}
