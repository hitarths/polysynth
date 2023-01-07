#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb374.h"

using namespace std;

void tuu_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 32;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  _out_outsk= new int [N];
    if(N==0){ continue; }
    int*  _out_outsp= new int [N];
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
      ANONYMOUS::foosp(N,_out_outsk);
      ANONYMOUS::tuu(N,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in tuu_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N)<<endl;
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
  tuu_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb374\n");
  return 0;
}
