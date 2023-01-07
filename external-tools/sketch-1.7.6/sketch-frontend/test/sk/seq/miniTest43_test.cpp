#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest43.h"

using namespace std;

void mergeSort_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(2==0){ continue; }
    bool*  input= new bool [2];
    for(int _i_=0;_i_<2;_i_++) {
      input[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"input=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<input[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(2==0){ continue; }
    bool*  _out_outsk= new bool [2];
    if(2==0){ continue; }
    bool*  _out_outsp= new bool [2];
    for(int _i_=0;_i_<2;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<2;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::sort(input,_out_outsk);
      ANONYMOUS::mergeSort(input,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<2;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in mergeSort_ANONYMOUSTest\n");
        cout<<"input = "<<printArr(input, 2)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 2)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 2)<<endl;
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
  mergeSort_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest43\n");
  return 0;
}
