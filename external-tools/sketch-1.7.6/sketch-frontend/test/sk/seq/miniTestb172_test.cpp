#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb172.h"

using namespace std;

void ta_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    bool*  i= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      i[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"i=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<i[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  t;
    t=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"t="<<t<<endl;
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
      ANONYMOUS::tt(i,t,_out_outsk);
      ANONYMOUS::ta(i,t,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in ta_ANONYMOUSTest\n");
      cout<<"i = "<<printArr(i, 5)<<endl;
      cout<<"t = "<<t<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] i;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  ta_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb172\n");
  return 0;
}
