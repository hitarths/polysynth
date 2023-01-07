#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb185.h"

using namespace std;

void zcafa_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    bool*  i= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      i[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"i=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<i[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(5==0){ continue; }
    bool*  j= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      j[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"j=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<j[_i_]<<", ";
      }
      cout<<"]"<<endl;
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
      ANONYMOUS::bafa(i,j,_out_outsk);
      ANONYMOUS::zcafa(i,j,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<5;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in zcafa_ANONYMOUSTest\n");
        cout<<"i = "<<printArr(i, 5)<<endl;
        cout<<"j = "<<printArr(j, 5)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 5)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 5)<<endl;
        exit(1);
      }
    }
    delete[] i;

    delete[] j;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

void tasa_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
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
      ANONYMOUS::zONE(_out_outsk);
      ANONYMOUS::tasa(_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<5;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in tasa_ANONYMOUSTest\n");
        cout<<"_out_outsk = "<<printArr(_out_outsk, 5)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 5)<<endl;
        exit(1);
      }
    }
    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

void fasa_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
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
      ANONYMOUS::zONE(_out_outsk);
      ANONYMOUS::fasa(_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<5;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in fasa_ANONYMOUSTest\n");
        cout<<"_out_outsk = "<<printArr(_out_outsk, 5)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 5)<<endl;
        exit(1);
      }
    }
    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  tasa_ANONYMOUSTest(p);
  zcafa_ANONYMOUSTest(p);
  fasa_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb185\n");
  return 0;
}
