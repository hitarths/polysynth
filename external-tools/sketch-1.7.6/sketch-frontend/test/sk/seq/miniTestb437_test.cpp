#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb437.h"

using namespace std;

void checkMTIndex__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::checkMTIndex__WrapperNospec();
      ANONYMOUS::checkMTIndex__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  checkMTIndex__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb437\n");
  return 0;
}
