#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest21.h"

using namespace std;

void reverseSketch_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(3==0){ continue; }
    bool*  in= new bool [3];
    for(int _i_=0;_i_<3;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    bool*  in2= new bool [3];
    for(int _i_=0;_i_<3;_i_++) {
      in2[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in2=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<in2[_i_]<<", ";
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
      ANONYMOUS::reverse(in,in2,_out_outsk);
      ANONYMOUS::reverseSketch(in,in2,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in reverseSketch_ANONYMOUSTest\n");
      cout<<"in = "<<printArr(in, 3)<<endl;
      cout<<"in2 = "<<printArr(in2, 3)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] in;

    delete[] in2;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  reverseSketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest21\n");
  return 0;
}
