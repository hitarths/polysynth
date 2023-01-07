#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTest78.h"

using namespace std;

void sketch_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    bool*  in1_0= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      in1_0[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in1_0=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<in1_0[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  in2;
    in2=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"in2="<<in2<<endl;
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
      ANONYMOUS::spec(in1_0,in2,_out_outsk);
      ANONYMOUS::sketch(in1_0,in2,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<5;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in sketch_ANONYMOUSTest\n");
        cout<<"in1_0 = "<<printArr(in1_0, 5)<<endl;
        cout<<"in2 = "<<in2<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 5)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 5)<<endl;
        exit(1);
      }
    }
    delete[] in1_0;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTest78\n");
  return 0;
}
