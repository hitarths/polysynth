#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb255.h"

using namespace std;

void skMGinter_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N * N==0){ continue; }
    bool*  in= new bool [N * N];
    for(int _i_=0;_i_<N * N;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<N * N;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    bool  half;
    half=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"half="<<half<<endl;
    }
    bool  fourth;
    fourth=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"fourth="<<fourth<<endl;
    }
    if((2 * N) * (2 * N)==0){ continue; }
    bool*  _out_outsk= new bool [(2 * N) * (2 * N)];
    if((2 * N) * (2 * N)==0){ continue; }
    bool*  _out_outsp= new bool [(2 * N) * (2 * N)];
    for(int _i_=0;_i_<(2 * N) * (2 * N);_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<(2 * N) * (2 * N);_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<(2 * N) * (2 * N);_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<(2 * N) * (2 * N);_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::MGinter(N,in,half,fourth,_out_outsk);
      ANONYMOUS::skMGinter(N,in,half,fourth,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<(2 * N) * (2 * N);_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in skMGinter_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"in = "<<printArr(in, N * N)<<endl;
        cout<<"half = "<<half<<endl;
        cout<<"fourth = "<<fourth<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, (2 * N) * (2 * N))<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, (2 * N) * (2 * N))<<endl;
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
  skMGinter_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb255\n");
  return 0;
}
