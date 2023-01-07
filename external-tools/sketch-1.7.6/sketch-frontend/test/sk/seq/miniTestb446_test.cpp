#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb446.h"

using namespace std;

void minVarTest__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::minVarTest__WrapperNospec();
      ANONYMOUS::minVarTest__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  minVarTest__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb446\n");
  return 0;
}
