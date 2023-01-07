#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb388.h"

using namespace std;

void voo__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  p;
    p=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"p="<<p<<endl;
    }
    int  n;
    n=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    int  m;
    m=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"m="<<m<<endl;
    }
    int  t;
    t=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"t="<<t<<endl;
    }
    if((p * n) * m==0){ continue; }
    int*  a= new int [(p * n) * m];
    for(int _i_=0;_i_<(p * n) * m;_i_++) {
      a[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<(p * n) * m;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(t==0){ continue; }
    int*  b= new int [t];
    for(int _i_=0;_i_<t;_i_++) {
      b[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"b=[";
      for(int _i_=0;_i_<t;_i_++) {
        cout<<b[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::voo__WrapperNospec(p,n,m,t,a,b);
      ANONYMOUS::voo__Wrapper(p,n,m,t,a,b);
    }catch(AssumptionFailedException& afe){  }
    delete[] a;

    delete[] b;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  voo__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb388\n");
  return 0;
}
