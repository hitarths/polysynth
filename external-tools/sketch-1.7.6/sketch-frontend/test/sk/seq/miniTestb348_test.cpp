#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb348.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  M;
    M=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"M="<<M<<endl;
    }
    if(N * M==0){ continue; }
    int*  x= new int [N * M];
    for(int _i_=0;_i_<N * M;_i_++) {
      x[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<N * M;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(N,M,x);
      ANONYMOUS::main__Wrapper(N,M,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb348\n");
  return 0;
}
