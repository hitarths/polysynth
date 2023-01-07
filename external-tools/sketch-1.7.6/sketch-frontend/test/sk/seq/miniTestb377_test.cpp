#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb377.h"

using namespace std;

void sketch__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i;
    i=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    int  lenL;
    lenL=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"lenL="<<lenL<<endl;
    }
    if(lenL==0){ continue; }
    int*  L= new int [lenL];
    for(int _i_=0;_i_<lenL;_i_++) {
      L[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"L=[";
      for(int _i_=0;_i_<lenL;_i_++) {
        cout<<L[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  lenRet;
    lenRet=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"lenRet="<<lenRet<<endl;
    }
    if(lenRet==0){ continue; }
    int*  ret= new int [lenRet];
    for(int _i_=0;_i_<lenRet;_i_++) {
      ret[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"ret=[";
      for(int _i_=0;_i_<lenRet;_i_++) {
        cout<<ret[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::sketch__WrapperNospec(i,lenL,L,lenRet,ret);
      ANONYMOUS::sketch__Wrapper(i,lenL,L,lenRet,ret);
    }catch(AssumptionFailedException& afe){  }
    delete[] L;

    delete[] ret;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb377\n");
  return 0;
}
