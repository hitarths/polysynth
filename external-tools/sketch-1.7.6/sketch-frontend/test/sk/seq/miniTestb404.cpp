#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb404.h"
namespace ANONYMOUS{

template<typename T_0>
Mat* Mat::create(int  r_, int  c_, T_0* M_, int M_len){
  int tlen_M = c_ * r_; 
  void* temp= malloc( sizeof(Mat)   + sizeof(int )*tlen_M); 
  Mat* rv = new (temp)Mat();
  rv->r =  r_;
  rv->c =  c_;
  CopyArr(rv->M, M_, tlen_M, M_len ); 
  return rv;
}
void foo__Wrapper(int r, int c) {
  bool _tt0[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  _out_s10= new int [10 * 10]; CopyArr<int >(_out_s10,_tt0, 10 * 10, 10);
  foo(r, c, _out_s10);
  delete[] _out_s10;
}
void foo__WrapperNospec(int r, int c) {}
void foo(int r, int c, int* _out/* len = 10 * 10 */) {
  for (int  __sa11=0;(__sa11) < (10);__sa11 = __sa11 + 1){
    assert (((__sa11) >= (0)) && ((__sa11) < (10)));;
    CopyArr<int >((_out+ 10 * __sa11),0, 10);
  }
  Mat*  m=Mat::create(r, c, (int*)NULL, 0);
  int*  M= new int [m->c * m->r]; CopyArr<int >(M,0, m->c * m->r);
  CopyArr<int >(M,m->M, m->c * m->r, m->c * m->r);
  int  _out_s2=0;
  min(m->c, 10, _out_s2);
  assert ((_out_s2) <= (m->c));;
  int  __sa0_s4=0;
  min(m->r, 10, __sa0_s4);
  bool  __sa0=0;
  __sa0 = (0) < (__sa0_s4);
  int  i=0;
  while (__sa0) {
    int  _out_s6=0;
    min(m->c, 10, _out_s6);
    assert (((i) >= (0)) && ((i) < (10)));;
    assert (((i) >= (0)) && ((i) < (m->r)));;
    assert ((_out_s6) <= (m->c));;
    CopyArr<int >((_out+ 10 * i),(M+ m->c * i), 10, _out_s6);
    i = i + 1;
    int  __sa0_s8=0;
    min(m->r, 10, __sa0_s8);
    __sa0 = (i) < (__sa0_s8);
  }
  delete[] M;
  return;
}
void min(int a, int b, int& _out) {
  _out = ((a) < (b) ? a : b);
  return;
}

}
