#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb419.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  ar= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      ar[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"ar=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<ar[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,ar);
      ANONYMOUS::main__Wrapper(n,ar);
    }catch(AssumptionFailedException& afe){  }
    delete[] ar;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb419\n");
  return 0;
}
