#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb266.h"

using namespace std;

void test__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  a= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      a[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test__WrapperNospec(N,a);
      ANONYMOUS::test__Wrapper(N,a);
    }catch(AssumptionFailedException& afe){  }
    delete[] a;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb266\n");
  return 0;
}
