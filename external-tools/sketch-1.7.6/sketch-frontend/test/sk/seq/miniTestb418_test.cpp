#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb418.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  A= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      A[_i_]=abs(rand()) % 16;
    }
    if(_p_.verbosity > 2){
      cout<<"A=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<A[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,A);
      ANONYMOUS::main__Wrapper(n,A);
    }catch(AssumptionFailedException& afe){  }
    delete[] A;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb418\n");
  return 0;
}
