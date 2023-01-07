#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb248.h"

using namespace std;

void rec6ptFragSK_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N;
    N=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"N="<<N<<endl;
    }
    if(N==0){ continue; }
    float*  in= new float [N];
    for(int _i_=0;_i_<N;_i_++) {
      in[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<in[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N==0){ continue; }
    float*  out= new float [N];
    for(int _i_=0;_i_<N;_i_++) {
      out[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"out=[";
      for(int _i_=0;_i_<N;_i_++) {
        cout<<out[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  il;
    il=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"il="<<il<<endl;
    }
    int  ih;
    ih=abs(rand()) % 8;
    if(_p_.verbosity > 2){
      cout<<"ih="<<ih<<endl;
    }
    if(N==0){ continue; }
    float*  _out_outsk= new float [N];
    if(N==0){ continue; }
    float*  _out_outsp= new float [N];
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
      ANONYMOUS::rec6ptFrag(N,in,out,il,ih,_out_outsk);
      ANONYMOUS::rec6ptFragSK(N,in,out,il,ih,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in rec6ptFragSK_ANONYMOUSTest\n");
        cout<<"N = "<<N<<endl;
        cout<<"in = "<<printArr(in, N)<<endl;
        cout<<"out = "<<printArr(out, N)<<endl;
        cout<<"il = "<<il<<endl;
        cout<<"ih = "<<ih<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N)<<endl;
        exit(1);
      }
    }
    delete[] in;

    delete[] out;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  rec6ptFragSK_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb248\n");
  return 0;
}
