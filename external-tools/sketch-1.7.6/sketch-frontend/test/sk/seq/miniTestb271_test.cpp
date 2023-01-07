#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb271.h"

using namespace std;

void tiledTranspose_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  P;
    P=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"P="<<P<<endl;
    }
    if(N * N==0){ continue; }
    bool*  input= new bool [N * N];
    for(int _i_=0;_i_<N * N;_i_++) {
      input[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"input=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<input[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N * N==0){ continue; }
    bool*  _out_outsk= new bool [N * N];
    if(N * N==0){ continue; }
    bool*  _out_outsp= new bool [N * N];
    for(int _i_=0;_i_<N * N;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<N * N;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::transpose(N,P,input,_out_outsk);
      ANONYMOUS::tiledTranspose(N,P,input,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N * N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in tiledTranspose_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"P = "<<P<<endl;
        cout<<"input = "<<printArr(input, N * N)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N * N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N * N)<<endl;
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
  tiledTranspose_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb271\n");
  return 0;
}
