#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb308.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    if(10==0){ continue; }
    int*  firstHalf= new int [10];
    for(int _i_=0;_i_<10;_i_++) {
      firstHalf[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"firstHalf=[";
      for(int _i_=0;_i_<10;_i_++) {
        cout<<firstHalf[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(10==0){ continue; }
    int*  secondHalf= new int [10];
    for(int _i_=0;_i_<10;_i_++) {
      secondHalf[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"secondHalf=[";
      for(int _i_=0;_i_<10;_i_++) {
        cout<<secondHalf[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(x,y,firstHalf,secondHalf);
      ANONYMOUS::main__Wrapper(x,y,firstHalf,secondHalf);
    }catch(AssumptionFailedException& afe){  }
    delete[] firstHalf;

    delete[] secondHalf;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb308\n");
  return 0;
}
