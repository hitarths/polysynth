#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb414.h"

using namespace std;

void check__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(7==0){ continue; }
    char*  word= new char [7];
    for(int _i_=0;_i_<7;_i_++) {
      word[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"word=[";
      for(int _i_=0;_i_<7;_i_++) {
        cout<<word[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::check__WrapperNospec(word);
      ANONYMOUS::check__Wrapper(word);
    }catch(AssumptionFailedException& afe){  }
    delete[] word;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  check__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb414\n");
  return 0;
}
