#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb400.h"
namespace ANONYMOUS{

FileHandle* FileHandle::create(int  maxReads_){
  void* temp= malloc( sizeof(FileHandle)  ); 
  FileHandle* rv = new (temp)FileHandle();
  rv->maxReads =  maxReads_;
  return rv;
}
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
void foo__Wrapper() {
  int  NDCNT__ANONYMOUS_s45=0;
  glblInit_NDCNT__ANONYMOUS_s49(NDCNT__ANONYMOUS_s45);
  bool _tt0[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  _out_s41= new int [10 * 10]; CopyArr<int >(_out_s41,_tt0, 10 * 10, 10);
  foo(_out_s41, NDCNT__ANONYMOUS_s45);
  delete[] _out_s41;
}
void foo__WrapperNospec() {}
void glblInit_NDCNT__ANONYMOUS_s49(int& NDCNT__ANONYMOUS_s48) {
  NDCNT__ANONYMOUS_s48 = 0;
}
void foo(int* _out/* len = 10 * 10 */, int& NDCNT__ANONYMOUS_s46) {
  for (int  __sa50=0;(__sa50) < (10);__sa50 = __sa50 + 1){
    assert (((__sa50) >= (0)) && ((__sa50) < (10)));;
    CopyArr<int >((_out+ 10 * __sa50),0, 10);
  }
  FileHandle*  fh_s9=NULL;
  getFile(fh_s9, NDCNT__ANONYMOUS_s46);
  Mat*  m_s11=NULL;
  matFromFile(fh_s9, m_s11, NDCNT__ANONYMOUS_s46);
  Mat*  m=NULL;
  m = m_s11;
  if ((m_s11) == (NULL)) {
    for (int  __sa51=0;(__sa51) < (10);__sa51 = __sa51 + 1){
      assert (((__sa51) >= (0)) && ((__sa51) < (10)));;
      CopyArr<int >((_out+ 10 * __sa51),0, 10);
    }
    return;
  }
  int*  M= new int [m->c * m->r]; CopyArr<int >(M,0, m->c * m->r);
  int*  __sa1= new int [m_s11->c * m_s11->r]; CopyArr<int >(__sa1,0, m_s11->c * m_s11->r);
  CopyArr<int >(__sa1,m_s11->M, m_s11->c * m_s11->r, m_s11->c * m_s11->r);
  for (int  __sa0=0;(__sa0) < (m->r);__sa0 = __sa0 + 1){
    if ((__sa0) < (m_s11->r)) {
      assert (((__sa0) >= (0)) && ((__sa0) < (m->r)));;
      assert (((__sa0) >= (0)) && ((__sa0) < (m_s11->r)));;
      CopyArr<int >((M+ m->c * __sa0),(__sa1+ m_s11->c * __sa0), m->c, m_s11->c);
    } else {
      assert (((__sa0) >= (0)) && ((__sa0) < (m->r)));;
      CopyArr<int >((M+ m->c * __sa0),0, m->c);
    }
  }
  int  _out_s13=0;
  min(m_s11->c, 10, _out_s13);
  assert ((_out_s13) <= (m_s11->c));;
  int  __sa0_s15=0;
  min(m_s11->r, 10, __sa0_s15);
  bool  __sa0=0;
  __sa0 = (0) < (__sa0_s15);
  bool _tt1[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  out= new int [10 * 10]; CopyArr<int >(out,_tt1, 10 * 10, 10);
  int  i=0;
  while (__sa0) {
    int  _out_s17=0;
    min(m_s11->c, 10, _out_s17);
    assert (((i) >= (0)) && ((i) < (10)));;
    assert (((i) >= (0)) && ((i) < (m->r)));;
    assert ((_out_s17) <= (m->c));;
    CopyArr<int >((out+ 10 * i),(M+ m->c * i), 10, _out_s17);
    i = i + 1;
    int  __sa0_s19=0;
    min(m_s11->r, 10, __sa0_s19);
    __sa0 = (i) < (__sa0_s19);
  }
  CopyArr<int >(_out,out, 10 * 10, 10 * 10);
  delete[] M;
  delete[] __sa1;
  delete[] out;
  return;
}
void getFile(FileHandle*& _out, int& NDCNT__ANONYMOUS_s47) { FileHandle* f = new FileHandle("miniTestb398.in"); _out = f; }
void matFromFile(FileHandle* fh, Mat*& _out, int& NDCNT__ANONYMOUS_s43) {
  bool  _out_s21=0;
  moreValues(fh, _out_s21);
  if (!(_out_s21)) {
    _out = NULL;
    return;
  }
  int  r_s23=0;
  readInt(fh, r_s23, NDCNT__ANONYMOUS_s43);
  bool  _out_s25=0;
  moreValues(fh, _out_s25);
  if (!(_out_s25)) {
    _out = NULL;
    return;
  }
  int  c_s27=0;
  readInt(fh, c_s27, NDCNT__ANONYMOUS_s43);
  printInt(c_s27);
  printInt(r_s23);
  int*  M= new int [c_s27 * r_s23]; CopyArr<int >(M,0, c_s27 * r_s23);
  for (int  i=0;(i) < (r_s23);i = i + 1){
    for (int  j=0;(j) < (c_s27);j = j + 1){
      bool  _out_s29=0;
      moreValues(fh, _out_s29);
      if (!(_out_s29)) {
        _out = NULL;
  delete[] M;
        return;
      }
      int  _out_s31=0;
      readInt(fh, _out_s31, NDCNT__ANONYMOUS_s43);
      assert (((i) >= (0)) && ((i) < (r_s23)));;
      assert (((j) >= (0)) && ((j) < (c_s27)));;
      (M[(c_s27 * i) + j]) = _out_s31;
    }
  }
  _out = Mat::create(r_s23, c_s27, M, c_s27 * r_s23);
  delete[] M;
  return;
}
void min(int a, int b, int& _out) {
  _out = ((a) < (b) ? a : b);
  return;
}
void getND(int& _out, int& NDCNT__ANONYMOUS_s42) {
  int  uo_s3=NDCNT__ANONYMOUS_s42;
  NDCNT__ANONYMOUS_s42 = NDCNT__ANONYMOUS_s42 + 1;
  int  _out_s35=0;
  getND_low(uo_s3, _out_s35);
  _out = _out_s35;
  return;
}
void moreValues(FileHandle* fh, bool& _out) { _out = fh->goon; }
void readInt(FileHandle* fh, int& _out, int& NDCNT__ANONYMOUS_s44) { _out = fh->readInt(); }
void getND_low(int i, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void printInt(int x) {printf("Input equals %d\n", x);}

}
