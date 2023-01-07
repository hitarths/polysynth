#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb106.h"

using namespace std;

void fooSK_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  arr;
    arr=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"arr="<<arr<<endl;
    }
    bool  org;
    org=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"org="<<org<<endl;
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
      ANONYMOUS::foo(arr,org,_out_outsk);
      ANONYMOUS::fooSK(arr,org,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in fooSK_ANONYMOUSTest\n");
      cout<<"arr = "<<arr<<endl;
      cout<<"org = "<<org<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  fooSK_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb106\n");
  return 0;
}
