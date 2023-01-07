#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "vops.h"
#include "miniTestb385.h"

using namespace std;

void moo_ANONYMOUSTest(Parameters& _p_) {
  for(int _test_=0;_test_< _p_.niters ;_test_++) {
    int  x;
    x=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"x="<<x<<endl;
    }
    int  w;
    w=abs(rand()) % 16;
    if(_p_.verbosity > 2){
      cout<<"w="<<w<<endl;
    }
    if(x==0){ continue; }
    int*  yy= new int [x];
    for(int _i_=0;_i_<x;_i_++) {
      yy[_i_]=abs(rand()) % 16;
    }
    if(_p_.verbosity > 2){
      cout<<"yy=[";
      for(int _i_=0;_i_<x;_i_++) {
        cout<<yy[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    if(x==0){ continue; }
    int*  y_outsk= new int [x];
    if(x==0){ continue; }
    int*  y_outsp= new int [x];
    if(x==0){ continue; }
    int*  y= new int [x];
    for(int _i_=0;_i_<x;_i_++) {
      y[_i_]=abs(rand()) % 16;
    }
    if(_p_.verbosity > 2){
      cout<<"y=[";
      for(int _i_=0;_i_<x;_i_++) {
        cout<<y[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    CopyArr(y_outsk, y, x, x);
    CopyArr(y_outsp, y, x, x);
    if(w==0){ continue; }
    int*  z_outsk= new int [w];
    if(w==0){ continue; }
    int*  z_outsp= new int [w];
    if(w==0){ continue; }
    int*  z= new int [w];
    for(int _i_=0;_i_<w;_i_++) {
      z[_i_]=abs(rand()) % 16;
    }
    if(_p_.verbosity > 2){
      cout<<"z=[";
      for(int _i_=0;_i_<w;_i_++) {
        cout<<z[_i_]<<", ";
      }
      cout<<"]"<<endl;
    }
    CopyArr(z_outsk, z, w, w);
    CopyArr(z_outsp, z, w, w);
    try{
      ANONYMOUS::foo(x,y_outsk,w,z_outsk,yy);
      ANONYMOUS::moo(x,y_outsp,w,z_outsp,yy);
    }catch(AssumptionFailedException& afe){  }
    for(int _i_=0;_i_<x;_i_++) {
      if(y_outsk[_i_]!=y_outsp[_i_]) {
        printf("Automated testing failed in moo_ANONYMOUSTest\n");
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<printArr(y, x)<<endl;
        cout<<"w = "<<w<<endl;
        cout<<"z = "<<printArr(z, w)<<endl;
        cout<<"yy = "<<printArr(yy, x)<<endl;
        cout<<"y_outsk = "<<printArr(y_outsk, x)<<endl;
        cout<<"y_outsp = "<<printArr(y_outsp, x)<<endl;
        exit(1);
      }
    }
    for(int _i_=0;_i_<w;_i_++) {
      if(z_outsk[_i_]!=z_outsp[_i_]) {
        printf("Automated testing failed in moo_ANONYMOUSTest\n");
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<printArr(y, x)<<endl;
        cout<<"w = "<<w<<endl;
        cout<<"z = "<<printArr(z, w)<<endl;
        cout<<"yy = "<<printArr(yy, x)<<endl;
        cout<<"z_outsk = "<<printArr(z_outsk, w)<<endl;
        cout<<"z_outsp = "<<printArr(z_outsp, w)<<endl;
        exit(1);
      }
    }
    delete[] y;

    delete[] z;

    delete[] yy;

    delete[] y_outsk;

    delete[] y_outsp;

    delete[] z_outsk;

    delete[] z_outsp;

  }
}

int main(int argc, char** argv) {
  Parameters p(argc, argv);
  srand(time(0));
  moo_ANONYMOUSTest(p);
  printf("Automated testing passed for miniTestb385\n");
  return 0;
}
