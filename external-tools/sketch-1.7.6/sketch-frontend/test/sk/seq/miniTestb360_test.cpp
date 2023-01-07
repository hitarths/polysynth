#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb360.h"

using namespace std;

void m2__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  x= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      x[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::m2__WrapperNospec(N,x);
      ANONYMOUS::m2__Wrapper(N,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    int*  i= new int [5];
    for(int _i_=0;_i_<5;_i_++) {
      i[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"i=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<i[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(i);
      ANONYMOUS::main__Wrapper(i);
    }catch(AssumptionFailedException& afe){  }
    delete[] i;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  m2__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb360\n");
  return 0;
}
