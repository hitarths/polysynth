#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb181.h"

using namespace std;

void test_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 2048;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    if(8==0){ continue; }
    bool*  _out_outsk= new bool [8];
    if(8==0){ continue; }
    bool*  _out_outsp= new bool [8];
    for(int _i_=0;_i_<8;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<8;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<8;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<8;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::spec(x,_out_outsk);
      ANONYMOUS::test(x,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<8;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in test_ANONYMOUSTest\n");
        cout<<"x = "<<x<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 8)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 8)<<endl;
        exit(1);
      }
    }
    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  test_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb181\n");
  return 0;
}
