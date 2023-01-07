#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb305.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  in1;
    in1=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in1="<<in1<<endl;
    }
    int  in2;
    in2=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in2="<<in2<<endl;
    }
    int  in3;
    in3=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in3="<<in3<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(in1,in2,in3);
      ANONYMOUS::main__Wrapper(in1,in2,in3);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb305\n");
  return 0;
}
