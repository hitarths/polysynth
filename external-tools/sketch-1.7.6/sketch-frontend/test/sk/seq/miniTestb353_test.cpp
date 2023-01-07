#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb353.h"

using namespace std;

void myfile__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    int*  tt= new int [5];
    for(int _i_=0;_i_<5;_i_++) {
      tt[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"tt=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<tt[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::myfile__WrapperNospec(tt);
      ANONYMOUS::myfile__Wrapper(tt);
    }catch(AssumptionFailedException& afe){  }
    delete[] tt;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  myfile__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb353\n");
  return 0;
}
