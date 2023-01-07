#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb173.h"
namespace ANONYMOUS{

foo* foo::create(int  v_, foo*  p_, foo*  n_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->v =  v_;
  rv->p =  p_;
  rv->n =  n_;
  return rv;
}
void sk(int i, bool& _out) {
  foo*  f=NULL;
  f = foo::create(0, NULL, NULL);
  f->n = foo::create(0, NULL, NULL);
  f->n->p = f;
  f->v = 10;
  _out = (f->n->p->v) == (10);
  return;
}
void test(int i, bool& _out) {
  _out = 1;
  return;
}

}
