#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb147.h"

using namespace std;

void moo_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  i_0;
    i_0=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"i_0="<<i_0<<endl;
    }
    int  j;
    j=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"j="<<j<<endl;
    }
    int  k;
    k=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"k="<<k<<endl;
    }
    int  _out_outsk;
    int  _out_outsp;
    _out_outsk=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsk="<<_out_outsk<<endl;
    }
    _out_outsp=0U;
    if(_p_.verbosity > 2){
      cout<<"_out_outsp="<<_out_outsp<<endl;
    }
    try{
      ANONYMOUS::foo(i_0,j,k,_out_outsk);
      ANONYMOUS::moo(i_0,j,k,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in moo_ANONYMOUSTest\n");
      cout<<"i_0 = "<<i_0<<endl;
      cout<<"j = "<<j<<endl;
      cout<<"k = "<<k<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  moo_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb147\n");
  return 0;
}
