#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb196.h"

using namespace std;

void main_fun_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n_0;
    n_0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n_0="<<n_0<<endl;
    }
    try{
      ANONYMOUS::VOID(n_0);
      ANONYMOUS::main_fun(n_0);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main_fun_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb196\n");
  return 0;
}
