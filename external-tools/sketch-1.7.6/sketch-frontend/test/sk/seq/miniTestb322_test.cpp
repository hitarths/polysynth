#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb322.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  t0;
    t0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"t0="<<t0<<endl;
    }
    int  t1;
    t1=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"t1="<<t1<<endl;
    }
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(t0,t1,N,i);
      ANONYMOUS::main__Wrapper(t0,t1,N,i);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb322\n");
  return 0;
}
