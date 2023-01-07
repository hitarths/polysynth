#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb393.h"
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
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  int*  x= new int [n]; CopyArr<int >(x,0, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (x[i]) = i;
  }
  Foo*  a=NULL;
  a = Foo::create(n, x, n);
  Foo*  b=Foo::create(n, (int*)NULL, 0);
  int  _tt0= 0;
  Moo*  m=Moo::create(a, &_tt0, 1);
  assert ((m->f) == (a));;
  for (int  i_0=0;(i_0) < (n);i_0 = i_0 + 1){
    assert (((a->a[i_0])) == (((i_0 - 1) + 1)));;
    assert (((b->a[i_0])) == (0));;
    assert (((m->b[i_0])) == (0));;
  }
  delete[] x;
}

}
