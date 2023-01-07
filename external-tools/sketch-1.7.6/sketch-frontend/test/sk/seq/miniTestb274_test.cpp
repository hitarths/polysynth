#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb274.h"

using namespace std;

void sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    int  M;
    M=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"M="<<M<<endl;
    }
    if(N * M==0){ continue; }
    bool*  in= new bool [N * M];
    for(int _i_=0;_i_<N * M;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<N * M;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N * M==0){ continue; }
    bool*  _out_outsk= new bool [N * M];
    if(N * M==0){ continue; }
    bool*  _out_outsp= new bool [N * M];
    for(int _i_=0;_i_<N * M;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<N * M;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<N * M;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<N * M;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test(N,M,in,_out_outsk);
      ANONYMOUS::sk(N,M,in,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N * M;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in sk_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"M = "<<M<<endl;
        cout<<"in = "<<printArr(in, N * M)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N * M)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N * M)<<endl;
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
  sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb274\n");
  return 0;
}
