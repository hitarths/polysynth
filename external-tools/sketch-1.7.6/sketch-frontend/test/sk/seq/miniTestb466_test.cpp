#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb466.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  t= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      t[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"t=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<t[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,t);
      ANONYMOUS::main__Wrapper(n,t);
    }catch(AssumptionFailedException& afe){  }
    delete[] t;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb466\n");
  return 0;
}
