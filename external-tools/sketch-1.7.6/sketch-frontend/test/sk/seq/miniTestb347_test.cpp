#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb347.h"

using namespace std;

void karatsuba_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  x= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      x[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N==0){ continue; }
    int*  y= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      y[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(2 * N==0){ continue; }
    int*  _out_outsk= new int [2 * N];
    if(2 * N==0){ continue; }
    int*  _out_outsp= new int [2 * N];
    for(int _i_=0;_i_<2 * N;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<2 * N;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<2 * N;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<2 * N;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::mult(N,x,y,_out_outsk);
      ANONYMOUS::karatsuba(N,x,y,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<2 * N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in karatsuba_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"x = "<<printArr(x, N)<<endl;
        cout<<"y = "<<printArr(y, N)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 2 * N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 2 * N)<<endl;
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
  karatsuba_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb347\n");
  return 0;
}
