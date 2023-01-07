#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb222.h"

using namespace std;

void test2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::test2__WrapperNospec();
      ANONYMOUS::test2__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void test1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::test1__WrapperNospec();
      ANONYMOUS::test1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test2__Wrapper_ANONYMOUSTest(p);
  test1__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb222\n");
  return 0;
}
