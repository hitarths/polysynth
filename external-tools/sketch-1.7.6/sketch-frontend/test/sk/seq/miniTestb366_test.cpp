#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb366.h"

using namespace std;

void moo_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y_outsk;
    int  y_outsp;
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    y_outsk=y;
    y_outsp=y;
    try{
      ANONYMOUS::foo(x,y_outsk);
      ANONYMOUS::moo(x,y_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(y_outsk!=y_outsp) {
      printf("Automated testing failed in moo_ANONYMOUSTest\n");
      cout<<"x = "<<x<<endl;
      cout<<"y = "<<y<<endl;
      cout<<"y_outsk = "<<y_outsk<<endl;
      cout<<"y_outsp = "<<y_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  moo_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb366\n");
  return 0;
}
