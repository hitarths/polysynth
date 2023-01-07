#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb198.h"

using namespace std;

void main_fun_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n0;
    n0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n0="<<n0<<endl;
    }
    try{
      ANONYMOUS::VOID(n0);
      ANONYMOUS::main_fun(n0);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main_fun_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb198\n");
  return 0;
}
