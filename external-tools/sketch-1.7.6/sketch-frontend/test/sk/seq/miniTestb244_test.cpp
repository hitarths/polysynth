#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb244.h"

using namespace std;

void rec6ptSk_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  N_;
    N_=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"N_="<<N_<<endl;
    }
    if(N_ * N_==0){ continue; }
    float*  in_= new float [N_ * N_];
    for(int _i_=0;_i_<N_ * N_;_i_++) {
      in_[_i_]=((rand()%2) == 1);
    }
    if(_p_.verbosity > 2){
      cout<<"in_=[";
      for(int _i_=0;_i_<N_ * N_;_i_++) {
        cout<<in_[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(N_ * N_==0){ continue; }
    float*  _out_outsk= new float [N_ * N_];
    if(N_ * N_==0){ continue; }
    float*  _out_outsp= new float [N_ * N_];
    for(int _i_=0;_i_<N_ * N_;_i_++) {
      _out_outsk[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsk=[";
      for(int _i_=0;_i_<N_ * N_;_i_++) {
        cout<<_out_outsk[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    for(int _i_=0;_i_<N_ * N_;_i_++) {
      _out_outsp[_i_]=0U;
    }
    if(_p_.verbosity > 2){
      cout<<"_out_outsp=[";
      for(int _i_=0;_i_<N_ * N_;_i_++) {
        cout<<_out_outsp[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    try{
      ANONYMOUS::rec6pt(N_,in_,_out_outsk);
      ANONYMOUS::rec6ptSk(N_,in_,_out_outsp);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<N_ * N_;_i_++) {
      if(_out_outsk[_i_]!=_out_outsp[_i_]) {
        printf("Automated testing failed in rec6ptSk_ANONYMOUSTest\n");
        cout<<"N_ = "<<N_<<endl;
        cout<<"in_ = "<<printArr(in_, N_ * N_)<<endl;
        cout<<"_out_outsk = "<<printArr(_out_outsk, N_ * N_)<<endl;
        cout<<"_out_outsp = "<<printArr(_out_outsp, N_ * N_)<<endl;
        exit(1);
      }
    }
    delete[] in_;

    delete[] _out_outsk;

    delete[] _out_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  rec6ptSk_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb244\n");
  return 0;
}
