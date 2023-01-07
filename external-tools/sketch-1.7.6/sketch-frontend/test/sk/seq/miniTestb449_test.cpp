#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb449.h"

using namespace std;

void main__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    int*  poly_list_int= new int [N];
    for(int _i_=0;_i_<N;_i_++) {
      poly_list_int[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"poly_list_int=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<poly_list_int[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::main__WrapperNospec(N,poly_list_int);
      ANONYMOUS::main__Wrapper(N,poly_list_int);
    }catch(AssumptionFailedException& afe){  }
    delete[] poly_list_int;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  main__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb449\n");
  return 0;
}
