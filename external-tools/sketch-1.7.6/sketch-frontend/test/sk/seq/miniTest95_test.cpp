#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest95.h"

using namespace std;

void sklog2_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(4==0){ continue; }
    bool*  in_0= new bool [4];
    for(int _i_=0;_i_<4;_i_++) {
      in_0[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in_0=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<in_0[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(4==0){ continue; }
    bool*  _out_outsk= new bool [4];
    if(4==0){ continue; }
    bool*  _out_outsp= new bool [4];
    for(int _i_=0;_i_<4;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<4;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::slog2(in_0,_out_outsk);
      ANONYMOUS::sklog2(in_0,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<4;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in sklog2_ANONYMOUSTest\n");
        cout<<"in_0 = "<<printArr(in_0, 4)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 4)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 4)<<endl;
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
  sklog2_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest95\n");
  return 0;
}
