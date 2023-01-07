#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb458.h"
namespace foo{

moo* moo::create(int  foo_){
  void* temp= malloc( sizeof(moo)  ); 
  moo* rv = new (temp)moo();
  rv->foo =  foo_;
  return rv;
}
foo* foo::create(int  x_, int  y_, int  moo_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  rv->y =  y_;
  rv->moo =  moo_;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  foo*  t=foo::create(x, 0, x + 1);
  int  _out_s1=0;
  Foo(x + 1, _out_s1);
  assert ((_out_s1) == (t->moo));;
}
void Foo(int x, int& _out) {
  _out = x;
  return;
}

}
