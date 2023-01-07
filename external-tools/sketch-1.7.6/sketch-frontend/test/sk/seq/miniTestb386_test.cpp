#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb386.h"

using namespace std;

void sketch__Wrapper_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  lenRet;
    lenRet=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"lenRet="<<lenRet<<endl;
    }
    if(lenRet==0){ continue; }
    int*  r1= new int [lenRet];
    for(int _i_=0;_i_<lenRet;_i_++) {
      r1[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"r1=[";
      for(int _i_=0;_i_<lenRet;_i_++) {
        cout<<r1[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(lenRet==0){ continue; }
    int*  r2= new int [lenRet];
    for(int _i_=0;_i_<lenRet;_i_++) {
      r2[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"r2=[";
      for(int _i_=0;_i_<lenRet;_i_++) {
        cout<<r2[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  len1;
    len1=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"len1="<<len1<<endl;
    }
    if(len1==0){ continue; }
    int*  l1= new int [len1];
    for(int _i_=0;_i_<len1;_i_++) {
      l1[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"l1=[";
      for(int _i_=0;_i_<len1;_i_++) {
        cout<<l1[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  len2;
    len2=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"len2="<<len2<<endl;
    }
    if(len2==0){ continue; }
    int*  l2= new int [len2];
    for(int _i_=0;_i_<len2;_i_++) {
      l2[_i_]=abs(rand()) % 4;
    }
    if(_p_.verbosity > 2){
      cout<<"l2=[";
      for(int _i_=0;_i_<len2;_i_++) {
        cout<<l2[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    int  j;
    j=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"j="<<j<<endl;
    }
    int  i;
    i=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"i="<<i<<endl;
    }
    int  t1;
    t1=abs(rand()) % 4;
    if(_p_.verbosity > 2){
      cout<<"t1="<<t1<<endl;
    }
    try{
      ANONYMOUS::sketch__WrapperNospec(lenRet,r1,r2,len1,l1,len2,l2,j,i,t1);
      ANONYMOUS::sketch__Wrapper(lenRet,r1,r2,len1,l1,len2,l2,j,i,t1);
    }catch(AssumptionFailedException& afe){  }
    delete[] r1;

    delete[] r2;

    delete[] l1;

    delete[] l2;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  sketch__Wrapper_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb386\n");
  return 0;
}
