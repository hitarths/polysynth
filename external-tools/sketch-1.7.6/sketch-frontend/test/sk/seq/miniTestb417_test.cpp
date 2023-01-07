#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb417.h"

using namespace std;

void main__Wrapper_MMTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  in;
    in=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in="<<in<<endl;
    }
    try{
      MM::main__WrapperNospec(in);
      MM::main__Wrapper(in);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_MMTest(p);
  printf("Automated testing passed for miniTestb417\n");
  return 0;
}
