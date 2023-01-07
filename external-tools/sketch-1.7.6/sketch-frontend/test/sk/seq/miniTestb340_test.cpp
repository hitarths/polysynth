#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb340.h"

using namespace std;

void test__Wrapper_ANONYMOUSTest(Parameters& _p_) {
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
      ANONYMOUS::test__WrapperNospec(N,x);
      ANONYMOUS::test__Wrapper(N,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb340\n");
  return 0;
}
