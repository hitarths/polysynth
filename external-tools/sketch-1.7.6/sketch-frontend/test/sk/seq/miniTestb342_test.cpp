#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb342.h"

using namespace std;

void test__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(4==0){ continue; }
    int*  x= new int [4];
    for(int _i_=0;_i_<4;_i_++) {
      x[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test__WrapperNospec(x);
      ANONYMOUS::test__Wrapper(x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb342\n");
  return 0;
}
