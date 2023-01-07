#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb297.h"

using namespace std;

void main__Wrapper_TTTTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  v;
    v=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"v="<<v<<endl;
    }
    try{
      TTT::main__WrapperNospec(v);
      TTT::main__Wrapper(v);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_TTTTest(p);
  printf("Automated testing passed for miniTestb297\n");
  return 0;
}
