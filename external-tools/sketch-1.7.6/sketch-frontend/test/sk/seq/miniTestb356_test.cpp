#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb356.h"

using namespace std;

void sumsk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  L;
    L=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"L="<<L<<endl;
    }
    if(L==0){ continue; }
    bool*  x= new bool [L];
    for(int _i_=0;_i_<L;_i_++) {
      x[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"x=[";
      for(int _i_=0;_i_<L;_i_++) {
        cout<<x[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  M;
    M=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"M="<<M<<endl;
    }
    if(M==0){ continue; }
    bool*  y= new bool [M];
    for(int _i_=0;_i_<M;_i_++) {
      y[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<M;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N==0){ continue; }
    bool*  _out_outsk= new bool [N];
    if(N==0){ continue; }
    bool*  _out_outsp= new bool [N];
    for(int _i_=0;_i_<N;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<N;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::sum(N,L,x,M,y,_out_outsk);
      ANONYMOUS::sumsk(N,L,x,M,y,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in sumsk_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"L = "<<L<<endl;
        cout<<"x = "<<printArr(x, L)<<endl;
        cout<<"M = "<<M<<endl;
        cout<<"y = "<<printArr(y, M)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N)<<endl;
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
  sumsk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb356\n");
  return 0;
}
