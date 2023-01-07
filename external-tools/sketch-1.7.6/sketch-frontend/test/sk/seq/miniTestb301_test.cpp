#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb301.h"

using namespace std;

void sketch__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(3==0){ continue; }
    int*  location= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      location[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"location=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<location[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    int*  user= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      user[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"user=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<user[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    int*  timeStart= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      timeStart[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"timeStart=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<timeStart[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    int*  timeEnd= new int [3];
    for(int _i_=0;_i_<3;_i_++) {
      timeEnd[_i_]=abs(rand()) % 32;
    }
    if(_p_.verbosity > 2){
      cout<<"timeEnd=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<timeEnd[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::sketch__WrapperNospec(location,user,timeStart,timeEnd);
      ANONYMOUS::sketch__Wrapper(location,user,timeStart,timeEnd);
    }catch(AssumptionFailedException& afe){  }
    delete[] location;

    delete[] user;

    delete[] timeStart;

    delete[] timeEnd;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb301\n");
  return 0;
}
