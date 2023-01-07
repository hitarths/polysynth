#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb412.h"

using namespace std;

void Sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(4==0){ continue; }
    char*  a= new char [4];
    for(int _i_=0;_i_<4;_i_++) {
      a[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<a[_i_]<<", ";
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
      ANONYMOUS::foo(a,_out_outsk);
      ANONYMOUS::Sk(a,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in Sk_ANONYMOUSTest\n");
      cout<<"a = "<<printArr(a, 4)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] a;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  Sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb412\n");
  return 0;
}
