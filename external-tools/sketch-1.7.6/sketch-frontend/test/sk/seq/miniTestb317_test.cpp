#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb317.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    bool*  ar= new bool [N];
    for(int _i_=0;_i_<N;_i_++) {
      ar[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"ar=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<ar[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(N,ar);
      ANONYMOUS::main__Wrapper(N,ar);
    }catch(AssumptionFailedException& afe){  }
    delete[] ar;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb317\n");
  return 0;
}
