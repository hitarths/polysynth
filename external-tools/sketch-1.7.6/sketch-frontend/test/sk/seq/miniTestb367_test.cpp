#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb367.h"

using namespace std;

void pain_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
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
      ANONYMOUS::pspec(N,_out_outsk);
      ANONYMOUS::pain(N,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in pain_ANONYMOUSTest\n");
      cout<<"N = "<<N<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  M;
    M=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"M="<<M<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(N,M);
      ANONYMOUS::main__Wrapper(N,M);
    }catch(AssumptionFailedException& afe){  }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  pain_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb367\n");
  return 0;
}
