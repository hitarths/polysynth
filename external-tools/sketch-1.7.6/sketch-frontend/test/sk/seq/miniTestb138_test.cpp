#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb138.h"

using namespace std;

void sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
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
      ANONYMOUS::test(i,_out_outsk);
      ANONYMOUS::sk(i,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in sk_ANONYMOUSTest\n");
      cout<<"i = "<<i<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb138\n");
  return 0;
}
