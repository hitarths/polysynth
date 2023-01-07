#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb174.h"
namespace ANONYMOUS{

foo* foo::create(int  v_, foo*  s_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->v =  v_;
  rv->s =  s_;
  return rv;
}
void sk(int i, bool& _out) {
  foo*  f=NULL;
  f = foo::create(0, NULL);
  f->s = f;
  f->v = 10;
  foo*  t=f->s;
  _out = (t->v) == (10);
  return;
}
void test(int i, bool& _out) {
  _out = 1;
  return;
}

}
