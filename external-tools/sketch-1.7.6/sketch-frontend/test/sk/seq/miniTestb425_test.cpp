#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb425.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  ir;
    ir=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"ir="<<ir<<endl;
    }
    int  ic;
    ic=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"ic="<<ic<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(ir,ic);
      ANONYMOUS::main__Wrapper(ir,ic);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb425\n");
  return 0;
}
