#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb295.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  v;
    v=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"v="<<v<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(v);
      ANONYMOUS::main__Wrapper(v);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb295\n");
  return 0;
}
