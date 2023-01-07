#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestBigInts6.h"

using namespace std;

void sketch__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    int  z;
    z=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"z="<<z<<endl;
    }
    try{
      ANONYMOUS::sketch__WrapperNospec(x,y,z);
      ANONYMOUS::sketch__Wrapper(x,y,z);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestBigInts6\n");
  return 0;
}
