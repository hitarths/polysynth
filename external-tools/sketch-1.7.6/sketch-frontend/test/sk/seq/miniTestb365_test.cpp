#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb365.h"

using namespace std;

void avgGood_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(5==0){ continue; }
    bool*  x= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      x[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(5==0){ continue; }
    bool*  y= new bool [5];
    for(int _i_=0;_i_<5;_i_++) {
      y[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<5;_i_++) {
        cout<<y[_i_]<<", ";
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
      ANONYMOUS::avg(x,y,_out_outsk);
      ANONYMOUS::avgGood(x,y,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<5;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in avgGood_ANONYMOUSTest\n");
        cout<<"x = "<<printArr(x, 5)<<endl;
        cout<<"y = "<<printArr(y, 5)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 5)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 5)<<endl;
        exit(1);
      }
    }
    delete[] x;

    delete[] y;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  avgGood_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb365\n");
  return 0;
}
