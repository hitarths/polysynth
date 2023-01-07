#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb465.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    int*  x1= new int [n];
    for(int _i_=0;_i_<n;_i_++) {
      x1[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"x1=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<x1[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  q;
    q=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"q="<<q<<endl;
    }
    if(q==0){ continue; }
    int*  y1= new int [q];
    for(int _i_=0;_i_<q;_i_++) {
      y1[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"y1=[";
      for(int _i_=0;_i_<q;_i_++) {
        cout<<y1[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(n,x1,q,y1);
      ANONYMOUS::main__Wrapper(n,x1,q,y1);
    }catch(AssumptionFailedException& afe){  }
    delete[] x1;

    delete[] y1;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb465\n");
  return 0;
}
