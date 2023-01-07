#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb407.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    if(x==0){ continue; }
    int*  y= new int [x];
    for(int _i_=0;_i_<x;_i_++) {
      y[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<x;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(x,y);
      ANONYMOUS::main__Wrapper(x,y);
    }catch(AssumptionFailedException& afe){  }
    delete[] y;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb407\n");
  return 0;
}
