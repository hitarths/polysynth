#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb379.h"

using namespace std;

void sketch__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  len2;
    len2=abs(rand()) % 2;
    if(_p_.verbosity > 2){
      cout<<"len2="<<len2<<endl;
    }
    if(len2==0){ continue; }
    int*  l2= new int [len2];
    for(int _i_=0;_i_<len2;_i_++) {
      l2[_i_]=abs(rand()) % 2;
    }
    if(_p_.verbosity > 2){
      cout<<"l2=[";
      for(int _i_=0;_i_<len2;_i_++) {
        cout<<l2[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  t1;
    t1=abs(rand()) % 2;
    if(_p_.verbosity > 2){
      cout<<"t1="<<t1<<endl;
    }
    try{
      ANONYMOUS::sketch__WrapperNospec(len2,l2,t1);
      ANONYMOUS::sketch__Wrapper(len2,l2,t1);
    }catch(AssumptionFailedException& afe){  }
    delete[] l2;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb379\n");
  return 0;
}
