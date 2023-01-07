#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb339.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  in= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      in[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,in);
      ANONYMOUS::main__Wrapper(n,in);
    }catch(AssumptionFailedException& afe){  }
    delete[] in;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb339\n");
  return 0;
}
