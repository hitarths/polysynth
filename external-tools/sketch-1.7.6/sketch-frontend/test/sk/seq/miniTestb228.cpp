#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb228.h"
namespace ANONYMOUS{

template<typename T_0>
Set* Set::create(int  numElements_, T_0* elems_, int elems_len){
  int tlen_elems = 7; 
  void* temp= malloc( sizeof(Set)   + sizeof(int )*tlen_elems); 
  Set* rv = new (temp)Set();
  rv->numElements =  numElements_;
  CopyArr(rv->elems, elems_, tlen_elems, elems_len ); 
  return rv;
}
void sketch(int* elemsT/* len = 3 */, int* elemsS/* len = 3 */, int a) {
  Set*  T_s21=NULL;
  newSet(T_s21);
  Set*  T=NULL;
  T = T_s21;
  for (int  i=0;(i) < (3);i = i + 1){
    Set*  T_s23=NULL;
    addElement(T, (elemsT[i]), T_s23);
    T = T_s23;
  }
  Set*  T__s25=NULL;
  addElement(T, a, T__s25);
  Set*  S_s27=NULL;
  newSet(S_s27);
  Set*  S=NULL;
  S = S_s27;
  for (int  i_0=0;(i_0) < (3);i_0 = i_0 + 1){
    Set*  S_s29=NULL;
    addElement(S, (elemsS[i_0]), S_s29);
    S = S_s29;
  }
  Set*  C_s31=NULL;
  newSet(C_s31);
  Set*  C_s33=NULL;
  unionSet(T, S, C_s33);
  Set*  C=NULL;
  C = C_s33;
  bool  _out_s61=0;
  isElemPresent(S, a, _out_s61);
  if (!(_out_s61)) {
    Set*  C_s38=NULL;
    addElement(C_s33, a, C_s38);
    C = C_s38;
  }
  Set*  R_s43=NULL;
  unionSet(T__s25, S, R_s43);
  bool  _out_s45=0;
  isEqual(C, R_s43, _out_s45);
  assert (_out_s45);;
}
void dummy(int* elemsT/* len = 3 */, int* elemsS/* len = 3 */, int a) {}
void newSet(Set*& _out) {
  _out = Set::create(0, (int*)NULL, 0);
  _out->numElements = 0;
  return;
}
void addElement(Set* X, int y, Set*& _out) {
  Set*  Z_s55=NULL;
  newSet(Z_s55);
  _out = Z_s55;
  bool  __sa0=(0) < (X->numElements);
  int  i=0;
  while (__sa0) {
    (Z_s55->elems[i]) = (X->elems[i]);
    i = i + 1;
    __sa0 = (i) < (X->numElements);
  }
  Z_s55->numElements = X->numElements;
  bool  __sa1=(0) < (Z_s55->numElements);
  int  i_0=0;
  while (__sa1) {
    if (((Z_s55->elems[i_0])) == (y)) {
      return;
    }
    i_0 = i_0 + 1;
    __sa1 = (i_0) < (Z_s55->numElements);
  }
  (Z_s55->elems[Z_s55->numElements]) = y;
  Z_s55->numElements = Z_s55->numElements + 1;
  return;
}
void unionSet(Set* X, Set* Y, Set*& _out) {
  Set*  Z_s49=NULL;
  newSet(Z_s49);
  _out = Z_s49;
  bool  __sa5=(0) < (X->numElements);
  int  i=0;
  while (__sa5) {
    (Z_s49->elems[i]) = (X->elems[i]);
    i = i + 1;
    __sa5 = (i) < (X->numElements);
  }
  Z_s49->numElements = X->numElements;
  int  currIndex=X->numElements;
  bool  __sa6=(0) < (Y->numElements);
  int  i_0=0;
  while (__sa6) {
    bool  _out_s51=0;
    isElemPresent(Z_s49, (Y->elems[i_0]), _out_s51);
    if (!(_out_s51)) {
      (Z_s49->elems[currIndex]) = (Y->elems[i_0]);
      Z_s49->numElements = Z_s49->numElements + 1;
      currIndex = currIndex + 1;
    }
    i_0 = i_0 + 1;
    __sa6 = (i_0) < (Y->numElements);
  }
  return;
}
void isElemPresent(Set* X, int y, bool& _out) {
  bool  __sa4=(0) < (X->numElements);
  int  i=0;
  while (__sa4) {
    if (((X->elems[i])) == (y)) {
      _out = 1;
      return;
    }
    i = i + 1;
    __sa4 = (i) < (X->numElements);
  }
  _out = 0;
  return;
}
void isEqual(Set* X, Set* Y, bool& _out) {
  if ((X->numElements) != (Y->numElements)) {
    _out = 0;
    return;
  }
  bool  __sa7=(0) < (X->numElements);
  int  i=0;
  while (__sa7) {
    bool  _out_s47=0;
    isElemPresent(Y, (X->elems[i]), _out_s47);
    if (!(_out_s47)) {
      _out = 0;
      return;
    }
    i = i + 1;
    __sa7 = (i) < (X->numElements);
  }
  _out = 1;
  return;
}

}
