#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb420.h"

using namespace std;

void main__Wrapper_FooTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    try{
      Foo::main__WrapperNospec();
      Foo::main__Wrapper();
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_FooTest(p);
  printf("Automated testing passed for miniTestb420\n");
  return 0;
}
