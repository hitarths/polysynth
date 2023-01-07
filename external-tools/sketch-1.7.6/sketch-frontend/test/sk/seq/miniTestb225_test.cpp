#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb225.h"

using namespace std;

void SLLsketch_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(2 * 2==0){ continue; }
    bool*  edges= new bool [2 * 2];
    for(int _i_=0;_i_<2 * 2;_i_++) {
      edges[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"edges=[";
      for(int _i_=0;_i_<2 * 2;_i_++) {
        cout<<edges[_i_]<<", ";
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
    try{
      ANONYMOUS::SLLspec(edges,_out_outsk);
      ANONYMOUS::SLLsketch(edges,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    if(_out_outsk!=_out_outsp) {
      printf("Automated testing failed in SLLsketch_ANONYMOUSTest\n");
      cout<<"edges = "<<printArr(edges, 2 * 2)<<endl;
      cout<<"_out_outsk = "<<_out_outsk<<endl;
      cout<<"_out_outsp = "<<_out_outsp<<endl;
      exit(1);
    }
    delete[] edges;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  SLLsketch_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb225\n");
  return 0;
}
