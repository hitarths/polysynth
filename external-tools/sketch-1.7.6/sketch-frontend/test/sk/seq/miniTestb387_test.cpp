#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb387.h"

using namespace std;

void foo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  m;
    m=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"m="<<m<<endl;
    }
    if(m==0){ continue; }
    int*  x= new int [m];
    for(int _i_=0;_i_<m;_i_++) {
      x[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<m;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  n;
    n=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  y= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      y[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(7==0){ continue; }
    int*  z= new int [7];
    for(int _i_=0;_i_<7;_i_++) {
      z[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"z=[";
      for(int _i_=0;_i_<7;_i_++) {
        cout<<z[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::foo__WrapperNospec(m,x,n,y,z);
      ANONYMOUS::foo__Wrapper(m,x,n,y,z);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

    delete[] y;

    delete[] z;

  }
}

void moo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  x= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      x[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::moo__WrapperNospec(n,x);
      ANONYMOUS::moo__Wrapper(n,x);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

  }
}

void too__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  m;
    m=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"m="<<m<<endl;
    }
    int  n;
    n=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n * m==0){ continue; }
    int*  x= new int [n * m];
    for(int _i_=0;_i_<n * m;_i_++) {
      x[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<n * m;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(n * m==0){ continue; }
    int*  y= new int [n * m];
    for(int _i_=0;_i_<n * m;_i_++) {
      y[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<n * m;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(m * n==0){ continue; }
    int*  z= new int [m * n];
    for(int _i_=0;_i_<m * n;_i_++) {
      z[_i_]=abs(rand()) % 8;
    }
    if(_p_.verbosity > 2){
      cout<<"z=[";
      for(int _i_=0;_i_<m * n;_i_++) {
        cout<<z[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::too__WrapperNospec(m,n,x,y,z);
      ANONYMOUS::too__Wrapper(m,n,x,y,z);
    }catch(AssumptionFailedException& afe){  }
    delete[] x;

    delete[] y;

    delete[] z;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  too__Wrapper_ANONYMOUSTest(p);
  foo__Wrapper_ANONYMOUSTest(p);
  moo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb387\n");
  return 0;
}
