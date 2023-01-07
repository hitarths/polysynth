#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb205.h"

using namespace std;

void sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    bool*  in_0= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      in_0[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in_0=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<in_0[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(5==0){ continue; }
    bool*  _out_outsk= new bool [5];
    if(5==0){ continue; }
    bool*  _out_outsp= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<5;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::spec(in_0,_out_outsk);
      ANONYMOUS::sk(in_0,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<5;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in sk_ANONYMOUSTest\n");
        cout<<"in_0 = "<<printArr(in_0, 5)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 5)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 5)<<endl;
        exit(1);
      }
    }
    delete[] in_0;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb205\n");
  return 0;
}
