#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb355.h"

using namespace std;

void main__Wrapper_t_cat_meTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    try{
      t_cat_me::main__WrapperNospec(i);
      t_cat_me::main__Wrapper(i);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_t_cat_meTest(p);
  printf("Automated testing passed for miniTestb355\n");
  return 0;
}
