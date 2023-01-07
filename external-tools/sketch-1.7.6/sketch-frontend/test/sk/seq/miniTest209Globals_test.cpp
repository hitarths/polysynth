#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest209Globals.h"

using namespace std;

void main3__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main3__WrapperNospec();
      ANONYMOUS::main3__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main2__WrapperNospec();
      ANONYMOUS::main2__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

void main1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      ANONYMOUS::main1__WrapperNospec();
      ANONYMOUS::main1__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main1__Wrapper_ANONYMOUSTest(p);
  main2__Wrapper_ANONYMOUSTest(p);
  main3__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest209Globals\n");
  return 0;
}
