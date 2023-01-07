#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb424.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  r;
    r=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"r="<<r<<endl;
    }
    int  c;
    c=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"c="<<c<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(r,c);
      ANONYMOUS::main__Wrapper(r,c);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb424\n");
  return 0;
}
