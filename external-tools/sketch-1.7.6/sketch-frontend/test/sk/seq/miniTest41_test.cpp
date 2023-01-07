#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest41.h"

using namespace std;

void tiledTranspose_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(4==0){ continue; }
    bool*  input= new bool [4];
    for(int _i_=0;_i_<4;_i_++) {
      input[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"input=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<input[_i_]<<", ";
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
      ANONYMOUS::transpose(input,_out_outsk);
      ANONYMOUS::tiledTranspose(input,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<4;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in tiledTranspose_ANONYMOUSTest\n");
        cout<<"input = "<<printArr(input, 4)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 4)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 4)<<endl;
        exit(1);
      }
    }
    delete[] input;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  tiledTranspose_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest41\n");
  return 0;
}
