#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb285.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(12==0){ continue; }
    int*  force= new int [12];
    for(int _i_=0;_i_<12;_i_++) {
      force[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"force=[";
      for(int _i_=0;_i_<12;_i_++) {
        cout<<force[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(force);
      ANONYMOUS::main__Wrapper(force);
    }catch(AssumptionFailedException& afe){  }
    delete[] force;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb285\n");
  return 0;
}
