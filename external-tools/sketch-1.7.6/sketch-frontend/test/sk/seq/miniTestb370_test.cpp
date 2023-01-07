#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb370.h"

using namespace std;

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  A;
    A=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"A="<<A<<endl;
    }
    int  B;
    B=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"B="<<B<<endl;
    }
    int  C;
    C=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"C="<<C<<endl;
    }
    if((A * B) * C==0){ continue; }
    int*  ar= new int [(A * B) * C];
    for(int _i_=0;_i_<(A * B) * C;_i_++) {
      ar[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"ar=[";
      for(int _i_=0;_i_<(A * B) * C;_i_++) {
        cout<<ar[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(2==0){ continue; }
    int*  part= new int [2];
    for(int _i_=0;_i_<2;_i_++) {
      part[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"part=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<part[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  x;
    x=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  y;
    y=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"y="<<y<<endl;
    }
    try{
      ANONYMOUS::foo__WrapperNospec(A,B,C,ar,part,x,y);
      ANONYMOUS::foo__Wrapper(A,B,C,ar,part,x,y);
    }catch(AssumptionFailedException& afe){  }
    delete[] ar;

    delete[] part;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb370\n");
  return 0;
}
