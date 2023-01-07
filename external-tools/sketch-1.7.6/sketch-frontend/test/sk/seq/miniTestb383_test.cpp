#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb383.h"

using namespace std;

void rest_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(3==0){ continue; }
    int*  in= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      in[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    bool*  ctrl= new bool [3];
    for(int _i_=0;_i_<3;_i_++) {
      ctrl[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"ctrl=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<ctrl[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    int*  _out_outsk= new int [3];
    if(3==0){ continue; }
    int*  _out_outsp= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<3;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test(in,ctrl,_out_outsk);
      ANONYMOUS::rest(in,ctrl,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<3;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in rest_ANONYMOUSTest\n");
        cout<<"in = "<<printArr(in, 3)<<endl;
        cout<<"ctrl = "<<printArr(ctrl, 3)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 3)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 3)<<endl;
        exit(1);
      }
    }
    delete[] in;

    delete[] ctrl;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  rest_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb383\n");
  return 0;
}
