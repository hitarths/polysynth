#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb392.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  a;
    a=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    int  bb;
    bb=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"bb="<<bb<<endl;
    }
    int  c;
    c=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"c="<<c<<endl;
    }
    int  d;
    d=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"d="<<d<<endl;
    }
    int  e;
    e=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"e="<<e<<endl;
    }
    int  g;
    g=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"g="<<g<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(a,bb,c,d,e,g);
      ANONYMOUS::main__Wrapper(a,bb,c,d,e,g);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb392\n");
  return 0;
}
