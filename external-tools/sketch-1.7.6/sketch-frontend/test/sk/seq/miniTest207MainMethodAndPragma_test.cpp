#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest207MainMethodAndPragma.h"

using namespace std;

void main2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    try{
      ANONYMOUS::main2__WrapperNospec(x);
      ANONYMOUS::main2__Wrapper(x);
    }catch(AssumptionFailedException& afe){  }
  }
}

void main1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    try{
      ANONYMOUS::main1__WrapperNospec(x);
      ANONYMOUS::main1__Wrapper(x);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main1__Wrapper_ANONYMOUSTest(p);
  main2__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest207MainMethodAndPragma\n");
  return 0;
}
