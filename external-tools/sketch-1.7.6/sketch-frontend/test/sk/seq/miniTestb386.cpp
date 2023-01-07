#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb386.h"
namespace ANONYMOUS{

Tuple* Tuple::create(int  first_, int  second_){
  void* temp= malloc( sizeof(Tuple)  ); 
  Tuple* rv = new (temp)Tuple();
  rv->first =  first_;
  rv->second =  second_;
  return rv;
}
void sketch__Wrapper(int lenRet, int* r1/* len = lenRet */, int* r2/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int j, int i, int t1) {
  sketch(lenRet, r1, r2, len1, l1, len2, l2, j, i, t1);
}
void sketch__WrapperNospec(int lenRet, int* r1/* len = lenRet */, int* r2/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int j, int i, int t1) {}
void sketch(int lenRet, int* r1/* len = lenRet */, int* r2/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int j, int i, int t1) {
  assert ((len2) >= (0));;
  assert ((len1) >= (0));;
  assert ((lenRet) >= (0));;
  void * _tt0[20] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
  Tuple**  ttt= new Tuple* [20]; CopyArr<Tuple* >(ttt,_tt0, 20, 20);
  for (int  ii=0;(ii) < (20);ii = ii + 1){
    (ttt[ii]) = Tuple::create(0, 0);
  }
  Tuple**  ret= new Tuple* [lenRet]; CopyArr<Tuple* >(ret,NULL, lenRet);
  for (int  m=0;(m) < (lenRet);m = m + 1){
    (ret[m]) = (ttt[m]);
    (ret[m])->first = (r1[m]);
    (ret[m])->second = (r2[m]);
  }
  bool  _pac_sc_s6=!((j) < (len2));
  if (_pac_sc_s6) {
    bool  _pac_sc_s6_s8=0;
    Tuple* * _tt1= new Tuple* [lenRet]; 
    CopyArr<Tuple*>(_tt1,ret, lenRet, lenRet);
    innerInvariant(lenRet, _tt1, len1, l1, len2, l2, i, j, t1, _pac_sc_s6_s8);
    _pac_sc_s6 = _pac_sc_s6_s8;
    delete[] _tt1;
  }
  if (_pac_sc_s6) {
    bool  _out_s10=0;
    Tuple* * _tt2= new Tuple* [lenRet]; 
    CopyArr<Tuple*>(_tt2,ret, lenRet, lenRet);
    outerInvariant(lenRet, _tt2, len1, l1, len2, l2, i + 1, j, t1, _out_s10);
    assert (_out_s10);;
  }
  bool  _pac_sc_s11=(i) < (len1);
  if (_pac_sc_s11) {
    bool  _pac_sc_s11_s13=0;
    Tuple* * _tt3= new Tuple* [lenRet]; 
    CopyArr<Tuple*>(_tt3,ret, lenRet, lenRet);
    outerInvariant(lenRet, _tt3, len1, l1, len2, l2, i, j, t1, _pac_sc_s11_s13);
    _pac_sc_s11 = _pac_sc_s11_s13;
  }
  if (_pac_sc_s11) {
    int  _out_s15=0;
    get(i, len1, l1, _out_s15);
    bool  _out_s17=0;
    Tuple* * _tt4= new Tuple* [lenRet]; 
    CopyArr<Tuple*>(_tt4,ret, lenRet, lenRet);
    innerInvariant(lenRet, _tt4, len1, l1, len2, l2, i, 0, _out_s15, _out_s17);
    assert (_out_s17);;
  }
  bool  _out_s19=0;
  Tuple* * _tt5= new Tuple* [0]; 
  CopyArr<Tuple*>(_tt5,(ret+ 0), 0, 0);
  outerInvariant(0, _tt5, len1, l1, len2, l2, 0, 0, t1, _out_s19);
  assert (_out_s19);;
}
void innerInvariant(int lenRet, Tuple** ret/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int i, int j, int t1, bool& _out) {
  bool  pred=(i) < (len1);
  bool  _out_s46=pred;
  pred = !((j) > (len2));
  _out_s46 = _out_s46 && pred;
  bool  _pac_sc_s47=_out_s46;
  if (_out_s46) {
    int  _pac_sc_s47_s50=0;
    get(i, len1, l1, _pac_sc_s47_s50);
    _pac_sc_s47 = (t1) == (_pac_sc_s47_s50);
  }
  int*  _out_s42= new int [i]; CopyArr<int >(_out_s42,0, i);
  top(i, len1, l1, _out_s42);
  int*  tmp1_s28= new int [16]; CopyArr<int >(tmp1_s28,_out_s42, 16, i);
  int*  op1= new int [i]; CopyArr<int >(op1,(tmp1_s28+ 0), i, i);
  int*  tmp2_s30= new int [16]; CopyArr<int >(tmp2_s30,l2, 16, len2);
  int*  op2= new int [len2]; CopyArr<int >(op2,(tmp2_s30+ 0), len2, len2);
  int  op1Len=i * len2;
  Tuple**  _out_s32= new Tuple* [i * len2]; CopyArr<Tuple* >(_out_s32,NULL, i * len2);
  product(i, op1, len2, op2, _out_s32);
  Tuple**  tmp1_s60= new Tuple* [16]; CopyArr<Tuple* >(tmp1_s60,_out_s32, 16, i * len2);
  Tuple**  op1_0= new Tuple* [op1Len]; CopyArr<Tuple* >(op1_0,(tmp1_s60+ 0), op1Len, op1Len);
  int*  _out_s44= new int [j]; CopyArr<int >(_out_s44,0, j);
  top(j, len2, l2, _out_s44);
  int*  tmp2_s38= new int [16]; CopyArr<int >(tmp2_s38,_out_s44, 16, j);
  int*  op2_0= new int [j]; CopyArr<int >(op2_0,(tmp2_s38+ 0), j, j);
  Tuple**  _out_s40= new Tuple* [j]; CopyArr<Tuple* >(_out_s40,NULL, j);
  leftProduct(t1, j, op2_0, _out_s40);
  Tuple**  tmp2_s62= new Tuple* [16]; CopyArr<Tuple* >(tmp2_s62,_out_s40, 16, j);
  Tuple**  op2_1= new Tuple* [j]; CopyArr<Tuple* >(op2_1,(tmp2_s62+ 0), j, j);
  Tuple**  retEquals_s64= new Tuple* [op1Len + j]; CopyArr<Tuple* >(retEquals_s64,NULL, op1Len + j);
  Tuple* * _tt6= new Tuple* [op1Len]; 
  CopyArr<Tuple*>(_tt6,op1_0, op1Len, op1Len);
  Tuple* * _tt7= new Tuple* [j]; 
  CopyArr<Tuple*>(_tt7,op2_1, j, j);
  appendTupleList(op1Len, _tt6, j, _tt7, retEquals_s64);
  bool  _pac_sc_s65=_pac_sc_s47;
  if (_pac_sc_s47) {
    bool  _pac_sc_s65_s67=0;
    Tuple* * _tt8= new Tuple* [lenRet]; 
    CopyArr<Tuple*>(_tt8,ret, lenRet, lenRet);
    Tuple* * _tt9= new Tuple* [op1Len + j]; 
    CopyArr<Tuple*>(_tt9,retEquals_s64, op1Len + j, op1Len + j);
    tupleListEquals(lenRet, _tt8, op1Len + j, _tt9, _pac_sc_s65_s67);
    _pac_sc_s65 = _pac_sc_s65_s67;
  }
  _out = _pac_sc_s65;
  delete[] _out_s42;
  delete[] tmp1_s28;
  delete[] op1;
  delete[] tmp2_s30;
  delete[] op2;
  delete[] _out_s32;
  delete[] tmp1_s60;
  delete[] op1_0;
  delete[] _out_s44;
  delete[] tmp2_s38;
  delete[] op2_0;
  delete[] _out_s40;
  delete[] tmp2_s62;
  delete[] op2_1;
  delete[] retEquals_s64;
  delete[] _tt6;
  delete[] _tt7;
  return;
}
void outerInvariant(int lenRet, Tuple** ret/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int i, int j, int t1, bool& _out) {
  bool  pred=!((i) > (len1));
  int*  _out_s42= new int [i]; CopyArr<int >(_out_s42,0, i);
  top(i, len1, l1, _out_s42);
  int*  tmp1_s28= new int [16]; CopyArr<int >(tmp1_s28,_out_s42, 16, i);
  int*  op1= new int [i]; CopyArr<int >(op1,(tmp1_s28+ 0), i, i);
  int*  tmp2_s30= new int [16]; CopyArr<int >(tmp2_s30,l2, 16, len2);
  int*  op2= new int [len2]; CopyArr<int >(op2,(tmp2_s30+ 0), len2, len2);
  int  opLen=i * len2;
  Tuple**  _out_s32= new Tuple* [i * len2]; CopyArr<Tuple* >(_out_s32,NULL, i * len2);
  product(i, op1, len2, op2, _out_s32);
  Tuple**  tmp_s23= new Tuple* [16]; CopyArr<Tuple* >(tmp_s23,_out_s32, 16, i * len2);
  Tuple**  retEquals= new Tuple* [opLen]; CopyArr<Tuple* >(retEquals,(tmp_s23+ 0), opLen, opLen);
  bool  _pac_sc_s24=pred;
  if (pred) {
    bool  _pac_sc_s24_s26=0;
    Tuple* * _tt10= new Tuple* [lenRet]; 
    CopyArr<Tuple*>(_tt10,ret, lenRet, lenRet);
    Tuple* * _tt11= new Tuple* [opLen]; 
    CopyArr<Tuple*>(_tt11,retEquals, opLen, opLen);
    tupleListEquals(lenRet, _tt10, opLen, _tt11, _pac_sc_s24_s26);
    _pac_sc_s24 = _pac_sc_s24_s26;
  }
  _out = _pac_sc_s24;
  delete[] _out_s42;
  delete[] tmp1_s28;
  delete[] op1;
  delete[] tmp2_s30;
  delete[] op2;
  delete[] _out_s32;
  delete[] tmp_s23;
  delete[] retEquals;
  return;
}
void get(int i, int N, int* A/* len = N */, int& _out) {
  assert ((i) < (N));;
  _out = (A[i]);
  return;
}
void top(int T, int N, int* A/* len = N */, int* _out/* len = T */) {
  if ((T) <= (N)) {
    CopyArr<int >(_out,(A+ 0), T, T);
    return;
  } else {
    CopyArr<int >(_out,0, T);
    return;
  }
}
void product(int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, Tuple** _out/* len = len1 * len2 */) {
  CopyArr<Tuple* >(_out,NULL, len1 * len2);
  for (int  i=0;(i) < (len1);i = i + 1){
    for (int  j=0;(j) < (len2);j = j + 1){
      int  e1=(l1[i]);
      int  e2=(l2[j]);
      Tuple*  t=Tuple::create(0, 0);
      t->first = e1;
      t->second = e2;
      (_out[(i * len2) + j]) = t;
    }
  }
  return;
}
void leftProduct(int v, int len2, int* l2/* len = len2 */, Tuple** _out/* len = len2 */) {
  CopyArr<Tuple* >(_out,NULL, len2);
  for (int  j=0;(j) < (len2);j = j + 1){
    Tuple*  t=Tuple::create(0, 0);
    t->first = v;
    t->second = (l2[j]);
    (_out[j]) = t;
  }
  return;
}
void appendTupleList(int len1, Tuple** l1/* len = len1 */, int len2, Tuple** l2/* len = len2 */, Tuple** _out/* len = len1 + len2 */) {
  CopyArr<Tuple* >(_out,NULL, len1 + len2);
  CopyArr<Tuple* >((_out+ 0),l1, len1, len1);
  CopyArr<Tuple* >((_out+ len1),l2, len2, len2);
  return;
}
void tupleListEquals(int l1Len, Tuple** l1/* len = l1Len */, int l2Len, Tuple** l2/* len = l2Len */, bool& _out) {
  if ((l1Len) != (l2Len)) {
    _out = 0;
    return;
  }
  for (int  i=0;(i) < (l1Len);i = i + 1){
    if ((((l1[i])->first) != ((l2[i])->first)) || (((l1[i])->second) != ((l2[i])->second))) {
      _out = 0;
      return;
    }
  }
  _out = (l1Len) == (l2Len);
  return;
}

}
