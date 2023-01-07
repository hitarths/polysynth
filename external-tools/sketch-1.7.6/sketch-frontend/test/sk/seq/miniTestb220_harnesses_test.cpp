#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb220_harnesses.h"

using namespace std;

void g__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::g__WrapperNospec();
      ANONYMOUS::g__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void f__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::f__WrapperNospec();
      ANONYMOUS::f__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  g__Wrapper_ANONYMOUSTest(p);
  f__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb220_harnesses\n");
  return 0;
}
