#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb157.h"

using namespace std;

void testSK0_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    if(2 * 2==0){ continue; }
    bool*  a= new bool [2 * 2];
    for(int _i_=0;_i_<2 * 2;_i_++) {
      a[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<2 * 2;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(2 * 2==0){ continue; }
    bool*  _out_outsk= new bool [2 * 2];
    if(2 * 2==0){ continue; }
    bool*  _out_outsp= new bool [2 * 2];
    for(int _i_=0;_i_<2 * 2;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<2 * 2;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<2 * 2;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<2 * 2;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test0(a,_out_outsk);
      ANONYMOUS::testSK0(a,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<2 * 2;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in testSK0_ANONYMOUSTest\n");
        cout<<"a = "<<printArr(a, 2 * 2)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 2 * 2)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 2 * 2)<<endl;
        exit(1);
      }
    }
    delete[] a;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  testSK0_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb157\n");
  return 0;
}
