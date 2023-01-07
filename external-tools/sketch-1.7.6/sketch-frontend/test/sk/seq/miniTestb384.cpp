#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb384.h"
namespace ANONYMOUS{

F* F::create(int  t_, F*  x_){
  void* temp= malloc( sizeof(F)  ); 
  F* rv = new (temp)F();
  rv->t =  t_;
  rv->x =  x_;
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  foo(i / 17, F::create(0, NULL));
  F*  t=F::create(0, NULL);
  t->t = i;
  t->x = t;
  assert ((t->x->t) == (i));;
}
void foo(int i, F* f) {
  f->x = F::create(0, NULL);
  if ((i) > (0)) {
    foo(i - 1, f->x);
  }
}

}
