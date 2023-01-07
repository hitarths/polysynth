#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb299.h"

using namespace std;

void testComp__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  a;
    a=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    int  b;
    b=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"b="<<b<<endl;
    }
    int  c;
    c=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"c="<<c<<endl;
    }
    try{
      ANONYMOUS::testComp__WrapperNospec(a,b,c);
      ANONYMOUS::testComp__Wrapper(a,b,c);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  testComp__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb299\n");
  return 0;
}
