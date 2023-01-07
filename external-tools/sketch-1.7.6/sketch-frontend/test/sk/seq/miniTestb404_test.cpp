#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb404.h"

using namespace std;

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  r;
    r=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"r="<<r<<endl;
    }
    int  c;
    c=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"c="<<c<<endl;
    }
    try{
      ANONYMOUS::foo__WrapperNospec(r,c);
      ANONYMOUS::foo__Wrapper(r,c);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb404\n");
  return 0;
}
