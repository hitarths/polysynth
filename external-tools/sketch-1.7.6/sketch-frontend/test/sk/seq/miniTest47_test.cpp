#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest47.h"

using namespace std;

void MergeSort_ANONYMOUSTest(Parameters& _p_) {
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
      ANONYMOUS::sort(input,_out_outsk);
      ANONYMOUS::MergeSort(input,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in MergeSort_ANONYMOUSTest\n");
      cout<<"input = "<<printArr(input, 4)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] input;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  MergeSort_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest47\n");
  return 0;
}
