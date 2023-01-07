#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb398.h"
namespace ANONYMOUS{

FileHandle* FileHandle::create(int  maxReads_){
  void* temp= malloc( sizeof(FileHandle)  ); 
  FileHandle* rv = new (temp)FileHandle();
  rv->maxReads =  maxReads_;
  return rv;
}
void foo__Wrapper() {
  int  NDCNT__ANONYMOUS_s27=0;
  glblInit_NDCNT__ANONYMOUS_s30(NDCNT__ANONYMOUS_s27);
  foo(NDCNT__ANONYMOUS_s27);
}
void foo__WrapperNospec() {}
void glblInit_NDCNT__ANONYMOUS_s30(int& NDCNT__ANONYMOUS_s29) {
  NDCNT__ANONYMOUS_s29 = 0;
}
void foo(int& NDCNT__ANONYMOUS_s28) {
  FileHandle*  fh_s5=NULL;
  getFile(fh_s5, NDCNT__ANONYMOUS_s28);
  bool  __sa0_s9=0;
  moreValues(fh_s5, __sa0_s9);
  bool  __sa0=0;
  __sa0 = __sa0_s9;
  while (__sa0) {
    int  x_s11=0;
    readInt(fh_s5, x_s11, NDCNT__ANONYMOUS_s28);
    printInt(x_s11);
    bool  __sa0_s15=0;
    moreValues(fh_s5, __sa0_s15);
    __sa0 = __sa0_s15;
  }
  bool  _out_s17=0;
  moreValues(fh_s5, _out_s17);
  assert (!(_out_s17));;
}
void getFile(FileHandle*& _out, int& NDCNT__ANONYMOUS_s25) { FileHandle* f = new FileHandle("miniTestb398.in"); _out = f; }
void moreValues(FileHandle* fh, bool& _out) { _out = fh->goon; }
void readInt(FileHandle* fh, int& _out, int& NDCNT__ANONYMOUS_s26) { _out = fh->readInt(); }
void getND(int& _out, int& NDCNT__ANONYMOUS_s24) {
  int  uo_s1=NDCNT__ANONYMOUS_s24;
  NDCNT__ANONYMOUS_s24 = NDCNT__ANONYMOUS_s24 + 1;
  int  _out_s21=0;
  getND_low(uo_s1, _out_s21);
  _out = _out_s21;
  return;
}
void printInt(int x) {printf("Input equals %d\n", x);}
void getND_low(int i, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
