#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest54.h"

using namespace std;

void tableSum_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(2==0){ continue; }
    bool*  in1= new bool [2];
    for(int _i_=0;_i_<2;_i_++) {
      in1[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in1=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<in1[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(2==0){ continue; }
    bool*  in2= new bool [2];
    for(int _i_=0;_i_<2;_i_++) {
      in2[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in2=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<in2[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(32==0){ continue; }
    bool*  _out_outsk= new bool [32];
    if(32==0){ continue; }
    bool*  _out_outsp= new bool [32];
    for(int _i_=0;_i_<32;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<32;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<32;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<32;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::sum(in1,in2,_out_outsk);
      ANONYMOUS::tableSum(in1,in2,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<32;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in tableSum_ANONYMOUSTest\n");
        cout<<"in1 = "<<printArr(in1, 2)<<endl;
        cout<<"in2 = "<<printArr(in2, 2)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 32)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 32)<<endl;
        exit(1);
      }
    }
    delete[] in1;

    delete[] in2;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  tableSum_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest54\n");
  return 0;
}
