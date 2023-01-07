#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb193.h"

using namespace std;

void main_fun_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  s;
    s=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"s="<<s<<endl;
    }
    try{
      ANONYMOUS::VOID(s);
      ANONYMOUS::main_fun(s);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main_fun_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb193\n");
  return 0;
}
