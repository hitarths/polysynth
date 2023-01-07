#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb264.h"

using namespace std;

void mainb__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(3 * 4==0){ continue; }
    int*  x= new int [3 * 4];
    for(int _i_=0;_i_<3 * 4;_i_++) {
      x[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<3 * 4;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::mainb__WrapperNospec(x);
      ANONYMOUS::mainb__Wrapper(x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  mainb__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb264\n");
  return 0;
}
