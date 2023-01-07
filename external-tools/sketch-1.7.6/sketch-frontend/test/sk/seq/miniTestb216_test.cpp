#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb216.h"

using namespace std;

void test1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    try{
      ANONYMOUS::test1__WrapperNospec(x);
      ANONYMOUS::test1__Wrapper(x);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test1__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb216\n");
  return 0;
}
