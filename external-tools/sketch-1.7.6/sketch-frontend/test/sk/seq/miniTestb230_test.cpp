#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb230.h"

using namespace std;

void _main_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    int*  A1= new int [5];
    for(int _i_=0;_i_<5;_i_++) {
      A1[_i_]=abs(rand()) % 2;
    }
    if(_p_.verbosity > 2){
      cout<<"A1=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<A1[_i_]<<", ";
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
    if(6==0){ continue; }
    int*  grammar__ANONYMOUS_s15_outsk= new int [6];
    if(6==0){ continue; }
    int*  grammar__ANONYMOUS_s15_outsp= new int [6];
    if(6==0){ continue; }
    int*  grammar__ANONYMOUS_s15= new int [6];
    for(int _i_=0;_i_<6;_i_++) {
      grammar__ANONYMOUS_s15[_i_]=abs(rand()) % 2;
    }
    if(_p_.verbosity > 2){
      cout<<"grammar__ANONYMOUS_s15=[";
      for(int _i_=0;_i_<6;_i_++) {
        cout<<grammar__ANONYMOUS_s15[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    CopyArr(grammar__ANONYMOUS_s15_outsk, grammar__ANONYMOUS_s15, 6, 6);
    CopyArr(grammar__ANONYMOUS_s15_outsp, grammar__ANONYMOUS_s15, 6, 6);
    try{
      ANONYMOUS::spec(A1,_out_outsk,grammar__ANONYMOUS_s15_outsk);
      ANONYMOUS::_main(A1,_out_outsp,grammar__ANONYMOUS_s15_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in _main_ANONYMOUSTest\n");
      cout<<"A1 = "<<printArr(A1, 5)<<endl;
      cout<<"grammar__ANONYMOUS_s15 = "<<printArr(grammar__ANONYMOUS_s15, 6)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    for(int _i_=0;_i_<6;_i_++) {
      if(grammar__ANONYMOUS_s15_outsk[_i_]!=grammar__ANONYMOUS_s15_outsp[_i_]) {
        printf("Automated testing failed in _main_ANONYMOUSTest\n");
        cout<<"A1 = "<<printArr(A1, 5)<<endl;
        cout<<"grammar__ANONYMOUS_s15 = "<<printArr(grammar__ANONYMOUS_s15, 6)<<endl;
        cout<<"grammar__ANONYMOUS_s15_outsk = "<<printArr(grammar__ANONYMOUS_s15_outsk, 6)<<endl;
        cout<<"grammar__ANONYMOUS_s15_outsp = "<<printArr(grammar__ANONYMOUS_s15_outsp, 6)<<endl;
        exit(1);
      }
    }
    delete[] A1;

    delete[] grammar__ANONYMOUS_s15;

    delete[] grammar__ANONYMOUS_s15_outsk;

    delete[] grammar__ANONYMOUS_s15_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  _main_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb230\n");
  return 0;
}
