#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb463.h"

using namespace std;

void mm__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  m;
    m=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"m="<<m<<endl;
    }
    if(m==0){ continue; }
    int*  x1= new int [m];
    for(int _i_=0;_i_<m;_i_++) {
      x1[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x1=[";
      for(int _i_=0;_i_<m;_i_++) {
        cout<<x1[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(m==0){ continue; }
    int*  x2= new int [m];
    for(int _i_=0;_i_<m;_i_++) {
      x2[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x2=[";
      for(int _i_=0;_i_<m;_i_++) {
        cout<<x2[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(m==0){ continue; }
    int*  x3= new int [m];
    for(int _i_=0;_i_<m;_i_++) {
      x3[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x3=[";
      for(int _i_=0;_i_<m;_i_++) {
        cout<<x3[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(m==0){ continue; }
    int*  x4= new int [m];
    for(int _i_=0;_i_<m;_i_++) {
      x4[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x4=[";
      for(int _i_=0;_i_<m;_i_++) {
        cout<<x4[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(m==0){ continue; }
    int*  x5= new int [m];
    for(int _i_=0;_i_<m;_i_++) {
      x5[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x5=[";
      for(int _i_=0;_i_<m;_i_++) {
        cout<<x5[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(m==0){ continue; }
    int*  x6= new int [m];
    for(int _i_=0;_i_<m;_i_++) {
      x6[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"x6=[";
      for(int _i_=0;_i_<m;_i_++) {
        cout<<x6[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::mm__WrapperNospec(m,x1,x2,x3,x4,x5,x6);
      ANONYMOUS::mm__Wrapper(m,x1,x2,x3,x4,x5,x6);
    }catch(AssumptionFailedException& afe){  }
    delete[] x1;

    delete[] x2;

    delete[] x3;

    delete[] x4;

    delete[] x5;

    delete[] x6;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  mm__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb463\n");
  return 0;
}
