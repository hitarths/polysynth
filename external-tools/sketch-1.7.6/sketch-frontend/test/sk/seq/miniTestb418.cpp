#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb418.h"
namespace ANONYMOUS{

MultiType* MultiType::create(MTArray*  lst_, int  val_, int  flag_){
  void* temp= malloc( sizeof(MultiType)  ); 
  MultiType* rv = new (temp)MultiType();
  rv->lst =  lst_;
  rv->val =  val_;
  rv->flag =  flag_;
  return rv;
}
template<typename T_0>
MTArray* MTArray::create(int  len_, T_0* A_, int A_len){
  int tlen_A = len_; 
  void* temp= malloc( sizeof(MTArray)   + sizeof(MultiType* )*tlen_A); 
  MTArray* rv = new (temp)MTArray();
  rv->len =  len_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
void main__Wrapper(int n, int* A/* len = n */) {
  _main(n, A);
}
void main__WrapperNospec(int n, int* A/* len = n */) {}
void _main(int n, int* A/* len = n */) {
  MultiType**  Ap= new MultiType* [n]; CopyArr<MultiType* >(Ap,NULL, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (Ap[i]) = MultiType::create(NULL, (A[i]), 0);
  }
  MultiType*  x=MultiType::create(MTArray::create(n, Ap, n), 0, 1);
  MultiType*  _out_s3=NULL;
  everyOther(x, _out_s3);
  delete[] Ap;
}
void everyOther(MultiType* x, MultiType*& _out) {
  _out = MultiType::create(MTArray::create(0, (MultiType** )NULL, 0), 0, 1);
  MultiType*  _out_s6=NULL;
  len(x, _out_s6);
  MultiType*  _out_s8=NULL;
  range(_out_s6, _out_s8);
  foreach_body1(_out_s8, _out, x);
  return;
}
void len(MultiType* x, MultiType*& _out) {
  assert ((x->flag) == (1));;
  _out = MultiType::create(NULL, x->lst->len, 0);
  return;
}
void range(MultiType* x, MultiType*& _out) {
  assert ((x->flag) == (0));;
  int  ub=x->val;
  MultiType**  A= new MultiType* [ub]; CopyArr<MultiType* >(A,NULL, ub);
  for (int  i=0;(i) < (ub);i = i + 1){
    (A[i]) = MultiType::create(NULL, i, 0);
  }
  _out = MultiType::create(MTArray::create(ub, A, ub), 0, 1);
  delete[] A;
  return;
}
void foreach_body1(MultiType* lst, MultiType* t1, MultiType* x0) {
  assert ((lst->flag) == (1));;
  MTArray*  ma=lst->lst;
  bool  __sa0=(0) < (ma->len);
  int  i=0;
  while (__sa0) {
    body1((ma->A[i]), t1, x0);
    i = i + 1;
    __sa0 = (i) < (ma->len);
  }
}
void body1(MultiType* i, MultiType* t, MultiType* x) {
  assert ((i->flag) == (0));;
  assert ((x->flag) == (1));;
  if (((i->val % 2)) == (0)) {
    append(t, (x->lst->A[i->val]));
  }
}
void append(MultiType* x, MultiType* y) {
  assert ((x->flag) == (1));;
  int  olen=x->lst->len;
  MultiType**  tArr= new MultiType* [olen + 1]; CopyArr<MultiType* >(tArr,x->lst->A, olen + 1, x->lst->len);
  (tArr[olen]) = y;
  x->lst = MTArray::create(olen + 1, tArr, olen + 1);
}

}
