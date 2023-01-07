#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb413.h"

using namespace std;

void Sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  n;
    n=abs(rand()) % 256;
    if(_p_.verbosity > 2){
      cout<<"n="<<n<<endl;
    }
    if(n==0){ continue; }
    char*  a= new char [n];
    for(int _i_=0;_i_<n;_i_++) {
      a[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"a=[";
      for(int _i_=0;_i_<n;_i_++) {
        cout<<a[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(3==0){ continue; }
    char*  _out_outsk= new char [3];
    if(3==0){ continue; }
    char*  _out_outsp= new char [3];
    for(int _i_=0;_i_<3;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<3;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<3;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::foo(n,a,_out_outsk);
      ANONYMOUS::Sk(n,a,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<3;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in Sk_ANONYMOUSTest\n");
        cout<<"n = "<<n<<endl;
        cout<<"a = "<<printArr(a, n)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 3)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 3)<<endl;
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
  Sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb413\n");
  return 0;
}
