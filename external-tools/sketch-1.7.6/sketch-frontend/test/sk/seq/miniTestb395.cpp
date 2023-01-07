#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb395.h"
namespace ANONYMOUS{

template<typename T_0>
Foo* Foo::create(int  n_, T_0* a_, int a_len){
  int tlen_a = n_; 
  void* temp= malloc( sizeof(Foo)   + sizeof(int )*tlen_a); 
  Foo* rv = new (temp)Foo();
  rv->n =  n_;
  CopyArr(rv->a, a_, tlen_a, a_len ); 
  return rv;
}
template<typename T_0>
Moo* Moo::create(Foo*  f_, T_0* b_, int b_len){
  int tlen_b = f_->n; 
  void* temp= malloc( sizeof(Moo)   + sizeof(int )*tlen_b); 
  Moo* rv = new (temp)Moo();
  rv->f =  f_;
  CopyArr(rv->b, b_, tlen_b, b_len ); 
  return rv;
}
void main__Wrapper(int n) {
  int  q__ANONYMOUS_s9=0;
  glblInit_q__ANONYMOUS_s11(q__ANONYMOUS_s9);
  _main(n, q__ANONYMOUS_s9);
}
void main__WrapperNospec(int n) {}
void glblInit_q__ANONYMOUS_s11(int& q__ANONYMOUS_s10) {
  q__ANONYMOUS_s10 = 5;
}
void glblInit_tt__ANONYMOUS_s13(Foo*& tt__ANONYMOUS_s12) {
  tt__ANONYMOUS_s12 = Foo::create(5, (int*)NULL, 0);
}
void _main(int n, int& q__ANONYMOUS_s8) {
  int _tt0[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int*  x= new int [10]; CopyArr<int >(x,_tt0, 10, 10);
  int  f_s2=0;
  min(10, n, f_s2);
  Foo*  f=NULL;
  f = Foo::create(n, (x+ 0), f_s2);
  Foo*  b_s4=NULL;
  newFoo(10, b_s4);
  Moo*  m=Moo::create(f, f->a, f->n);
  for (int  i=0;(i) < (n);i = i + 1){
    assert (((m->b[i])) == ((m->f->a[i])));;
    if ((i) < (10)) {
      assert (((m->b[i])) == ((b_s4->a[i])));;
    }
  }
  q__ANONYMOUS_s8 = n;
  modi(q__ANONYMOUS_s8);
  Foo*  nfnf_s6=NULL;
  newFoo(n, nfnf_s6);
  assert ((nfnf_s6->n) == ((q__ANONYMOUS_s8 - 1)));;
  delete[] x;
}
void min(int a, int b, int& _out) {
  _out = ((a) < (b) ? a : b);
  return;
}
void newFoo(int n, Foo*& _out) {
  _out = Foo::create(n, (int*)NULL, 0);
  bool  __sa0=(0) < (_out->n);
  int  i=0;
  while (__sa0) {
    (_out->a[i]) = i;
    i = i + 1;
    __sa0 = (i) < (_out->n);
  }
  return;
}
void modi(int& q__ANONYMOUS_s7) {
  q__ANONYMOUS_s7 = q__ANONYMOUS_s7 + 1;
}

}
