#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb208.h"

using namespace std;

void harnessfcn__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 2;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    try{
      ANONYMOUS::harnessfcn__WrapperNospec(x);
      ANONYMOUS::harnessfcn__Wrapper(x);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  harnessfcn__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb208\n");
  return 0;
}
