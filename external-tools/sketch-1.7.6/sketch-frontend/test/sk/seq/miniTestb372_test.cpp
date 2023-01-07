#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb372.h"

using namespace std;

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    try{
      ANONYMOUS::foo__WrapperNospec(N);
      ANONYMOUS::foo__Wrapper(N);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb372\n");
  return 0;
}
