#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest7small.h"

using namespace std;

void reverseSketch_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(2==0){ continue; }
    bool*  in= new bool [2];
    for(int _i_=0;_i_<2;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<2;_i_++) {
        cout<<in[_i_]<<", ";
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
      ANONYMOUS::reverse(in,_out_outsk);
      ANONYMOUS::reverseSketch(in,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<2;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in reverseSketch_ANONYMOUSTest\n");
        cout<<"in = "<<printArr(in, 2)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 2)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 2)<<endl;
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
  reverseSketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest7small\n");
  return 0;
}
