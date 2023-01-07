#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb375.h"

using namespace std;

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  in= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      in[_i_]=abs(rand()) % 16;
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  i;
    i=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    try{
      ANONYMOUS::foo__WrapperNospec(N,in,i);
      ANONYMOUS::foo__Wrapper(N,in,i);
    }catch(AssumptionFailedException& afe){  }
    delete[] in;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb375\n");
  return 0;
}
