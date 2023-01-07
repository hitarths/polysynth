#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb278.h"

using namespace std;

void main1__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    try{
      ANONYMOUS::main1__WrapperNospec(x,y);
      ANONYMOUS::main1__Wrapper(x,y);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main1__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb278\n");
  return 0;
}
