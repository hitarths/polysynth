#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb338.h"

using namespace std;

void check__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(6==0){ continue; }
    int*  a= new int [6];
    for(int _i_=0;_i_<6;_i_++) {
      a[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<6;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::check__WrapperNospec(a);
      ANONYMOUS::check__Wrapper(a);
    }catch(AssumptionFailedException& afe){  }
    delete[] a;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  check__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb338\n");
  return 0;
}
