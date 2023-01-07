#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb349.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  d= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      d[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"d=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<d[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,d);
      ANONYMOUS::main__Wrapper(n,d);
    }catch(AssumptionFailedException& afe){  }
    delete[] d;

  }
}

void test2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    try{
      ANONYMOUS::test2__WrapperNospec(n);
      ANONYMOUS::test2__Wrapper(n);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  test2__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb349\n");
  return 0;
}
