#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb432.h"

using namespace std;

void multSketch_ANONYMOUSTest(Parameters& _p_) {
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
      ANONYMOUS::mult(m,n,_out_outsk);
      ANONYMOUS::multSketch(m,n,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in multSketch_ANONYMOUSTest\n");
      cout<<"m = "<<m<<endl;
      cout<<"n = "<<n<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  multSketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb432\n");
  return 0;
}
