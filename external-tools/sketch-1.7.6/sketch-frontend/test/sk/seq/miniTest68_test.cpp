#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest68.h"

using namespace std;

void ShiftRowsSK_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(128==0){ continue; }
    bool*  in= new bool [128];
    for(int _i_=0;_i_<128;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<128;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(128==0){ continue; }
    bool*  _out_outsk= new bool [128];
    if(128==0){ continue; }
    bool*  _out_outsp= new bool [128];
    for(int _i_=0;_i_<128;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<128;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<128;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<128;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::ShiftRows(in,_out_outsk);
      ANONYMOUS::ShiftRowsSK(in,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<128;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in ShiftRowsSK_ANONYMOUSTest\n");
        cout<<"in = "<<printArr(in, 128)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 128)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 128)<<endl;
        exit(1);
      }
    }
    delete[] in;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  ShiftRowsSK_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest68\n");
  return 0;
}
