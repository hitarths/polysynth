#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb137.h"

using namespace std;

void sk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    bool  a;
    a=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"a="<<a<<endl;
    }
    bool  b;
    b=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"b="<<b<<endl;
    }
    bool  c;
    c=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"c="<<c<<endl;
    }
    bool  d;
    d=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"d="<<d<<endl;
    }
    bool  e;
    e=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"e="<<e<<endl;
    }
    bool  f;
    f=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"f="<<f<<endl;
    }
    bool  g;
    g=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"g="<<g<<endl;
    }
    bool  h;
    h=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"h="<<h<<endl;
    }
    bool  i;
    i=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    bool  j;
    j=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"j="<<j<<endl;
    }
    bool  k;
    k=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"k="<<k<<endl;
    }
    bool  l;
    l=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"l="<<l<<endl;
    }
    bool  m;
    m=((rand()%2) == 1);
    if(_p_.verbosity > 2){
      cout<<"m="<<m<<endl;
    }
    if(4==0){ continue; }
    bool*  _out_outsk= new bool [4];
    if(4==0){ continue; }
    bool*  _out_outsp= new bool [4];
    for(int _i_=0;_i_<4;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<4;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<4;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::test(a,b,c,d,e,f,g,h,i,j,k,l,m,_out_outsk);
      ANONYMOUS::sk(a,b,c,d,e,f,g,h,i,j,k,l,m,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<4;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in sk_ANONYMOUSTest\n");
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
        cout<<"e = "<<e<<endl;
        cout<<"f = "<<f<<endl;
        cout<<"g = "<<g<<endl;
        cout<<"h = "<<h<<endl;
        cout<<"i = "<<i<<endl;
        cout<<"j = "<<j<<endl;
        cout<<"k = "<<k<<endl;
        cout<<"l = "<<l<<endl;
        cout<<"m = "<<m<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, 4)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, 4)<<endl;
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
  sk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb137\n");
  return 0;
}
