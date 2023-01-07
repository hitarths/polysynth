#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb382.h"

using namespace std;

void sketch__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  len1;
    len1=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"len1="<<len1<<endl;
    }
    if(len1==0){ continue; }
    int*  l1= new int [len1];
    for(int _i_=0;_i_<len1;_i_++) {
      l1[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"l1=[";
      for(int _i_=0;_i_<len1;_i_++) {
        cout<<l1[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::sketch__WrapperNospec(len1,l1);
      ANONYMOUS::sketch__Wrapper(len1,l1);
    }catch(AssumptionFailedException& afe){  }
    delete[] l1;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb382\n");
  return 0;
}
