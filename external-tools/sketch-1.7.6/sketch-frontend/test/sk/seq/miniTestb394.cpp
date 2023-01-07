#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb394.h"
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
  int _tt0[10] = {0, 2, 0, 12, 10, 0, 4, 0, 0, 0};
  int*  x= new int [10]; CopyArr<int >(x,_tt0, 10, 10);
  int  f_s1=0;
  min(10, n, f_s1);
  Foo*  f=NULL;
  f = Foo::create(n, (x+ 0), f_s1);
  Moo*  m=Moo::create(f, f->a, f->n);
  for (int  i=0;(i) < (n);i = i + 1){
    assert (((m->b[i])) == ((m->f->a[i])));;
  }
  delete[] x;
}
void min(int a, int b, int& _out) {
  _out = ((a) < (b) ? a : b);
  return;
}

}
