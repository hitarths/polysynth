#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb228.h"

using namespace std;

void sketch_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(3==0){ continue; }
    int*  elemsT= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      elemsT[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"elemsT=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<elemsT[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    int*  elemsS= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      elemsS[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"elemsS=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<elemsS[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  a;
    a=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    try{
      ANONYMOUS::dummy(elemsT,elemsS,a);
      ANONYMOUS::sketch(elemsT,elemsS,a);
    }catch(AssumptionFailedException& afe){  }
    delete[] elemsT;

    delete[] elemsS;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb228\n");
  return 0;
}
