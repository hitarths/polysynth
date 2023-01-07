#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb335.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  in;
    in=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"in="<<in<<endl;
    }
    int  x;
    x=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(in,x,y);
      ANONYMOUS::main__Wrapper(in,x,y);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb335\n");
  return 0;
}
