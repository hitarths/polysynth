#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb448.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  x= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      x[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,x);
      ANONYMOUS::main__Wrapper(n,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  x= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      x[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::foo__WrapperNospec(n,x);
      ANONYMOUS::foo__Wrapper(n,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo__Wrapper_ANONYMOUSTest(p);
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb448\n");
  return 0;
}
