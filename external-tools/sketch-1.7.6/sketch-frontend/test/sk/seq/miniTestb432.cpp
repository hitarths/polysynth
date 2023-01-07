#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb432.h"
namespace ANONYMOUS{

MultiType* MultiType::create(int  val_, int  flag_, MTList*  lst_){
  void* temp= malloc( sizeof(MultiType)  ); 
  MultiType* rv = new (temp)MultiType();
  rv->val =  val_;
  rv->flag =  flag_;
  rv->lst =  lst_;
  return rv;
}
template<typename T_0>
MTList* MTList::create(int  len_, T_0* listValues_, int listValues_len){
  int tlen_listValues = len_; 
  void* temp= malloc( sizeof(MTList)   + sizeof(MultiType* )*tlen_listValues); 
  MTList* rv = new (temp)MTList();
  rv->len =  len_;
  CopyArr(rv->listValues, listValues_, tlen_listValues, listValues_len ); 
  return rv;
}
void multSketch(int m, int n, int& _out) {
  MultiType*  mMT=MultiType::create(m, 0, NULL);
  MultiType*  nMT=MultiType::create(n, 0, NULL);
  MultiType*  result_s2=NULL;
  multIA(mMT, nMT, result_s2);
  _out = result_s2->val;
  return;
}
void mult(int m, int n, int& _out) {
  _out = m * n;
  return;
}
void multIA(MultiType* m, MultiType* n, MultiType*& _out) {
  int  result_s6=0;
  fuzzAssign(1, result_s6);
  _out = MultiType::create(result_s6, 0, NULL);
  MultiType*  _out_s8=NULL;
  range(n, _out_s8);
  foreach_body1(_out_s8, _out, m);
  return;
}
void fuzzAssign(int x, int& _out) {
  _out = 0;
}
void range(MultiType* x, MultiType*& _out) {
  assert ((x->flag) == (0));;
  int  ub=x->val;
  MultiType**  A= new MultiType* [ub]; CopyArr<MultiType* >(A,NULL, ub);
  for (int  i=0;(i) < (ub);i = i + 1){
    (A[i]) = MultiType::create(i, 0, NULL);
  }
  _out = MultiType::create(0, 1, MTList::create(ub, A, ub));
  delete[] A;
  return;
}
void foreach_body1(MultiType* lst, MultiType*& result0, MultiType* m1) {
  assert ((lst->flag) == (1));;
  MTList*  ma=lst->lst;
  bool  __sa0=(0) < (ma->len);
  int  i=0;
  while (__sa0) {
    body1((ma->listValues[i]), result0, m1);
    i = i + 1;
    __sa0 = (i) < (ma->len);
  }
}
void body1(MultiType* y, MultiType*& result, MultiType* m) {
  assert ((y->flag) == (0));;
  MultiType*  result_s4=NULL;
  multiplyMultiType(result, m, result_s4);
  result = result_s4;
}
void multiplyMultiType(MultiType* m, MultiType* n, MultiType*& _out) {
  assert ((m->flag) == (0));;
  assert ((n->flag) == (0));;
  _out = MultiType::create(m->val + n->val, 0, NULL);
  return;
}

}
