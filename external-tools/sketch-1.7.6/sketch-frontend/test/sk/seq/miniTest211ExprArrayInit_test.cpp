#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest211ExprArrayInit.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  in_;
    in_=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in_="<<in_<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(in_);
      ANONYMOUS::main__Wrapper(in_);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest211ExprArrayInit\n");
  return 0;
}