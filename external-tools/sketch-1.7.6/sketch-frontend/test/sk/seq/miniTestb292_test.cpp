#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb292.h"

using namespace std;

void test__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  a;
    a=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    int  b;
    b=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"b="<<b<<endl;
    }
    try{
      ANONYMOUS::test__WrapperNospec(a,b);
      ANONYMOUS::test__Wrapper(a,b);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb292\n");
  return 0;
}
