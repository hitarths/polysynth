#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb215.h"

using namespace std;

void foo_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(3==0){ continue; }
    bool*  x= new bool [3];
    for(int _i_=0;_i_<3;_i_++) {
      x[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    bool*  y= new bool [3];
    for(int _i_=0;_i_<3;_i_++) {
      y[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    bool  _out_outsk;
    bool  _out_outsp;
    _out_outsk=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsk="<<_out_outsk<<endl;
    }
    _out_outsp=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsp="<<_out_outsp<<endl;
    }
    try{
      ANONYMOUS::fooSK(x,y,_out_outsk);
      ANONYMOUS::foo(x,y,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in foo_ANONYMOUSTest\n");
      cout<<"x = "<<printArr(x, 3)<<endl;
      cout<<"y = "<<printArr(y, 3)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] x;

    delete[] y;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  foo_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb215\n");
  return 0;
}
