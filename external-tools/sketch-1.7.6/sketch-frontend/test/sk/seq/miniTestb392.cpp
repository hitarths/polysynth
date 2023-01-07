#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb392.h"
namespace ANONYMOUS{

Foo* Foo::create(int  x_, int  y_){
  void* temp= malloc( sizeof(Foo)  ); 
  Foo* rv = new (temp)Foo();
  rv->x =  x_;
  rv->y =  y_;
  return rv;
}
Bar* Bar::create(Foo*  f_, Bar*  b_){
  void* temp= malloc( sizeof(Bar)  ); 
  Bar* rv = new (temp)Bar();
  rv->f =  f_;
  rv->b =  b_;
  return rv;
}
void main__Wrapper(int a, int bb, int c, int d, int e, int g) {
  _main(a, bb, c, d, e, g);
}
void main__WrapperNospec(int a, int bb, int c, int d, int e, int g) {}
void _main(int a, int bb, int c, int d, int e, int g) {
  Foo*  f=Foo::create(a, bb);
  assert (((f->x) == (a)) && ((f->y) == (bb)));;
  Bar*  b=NULL;
  b = Bar::create(Foo::create(c, d), Bar::create(Foo::create(e, g), NULL));
  assert (((((b->f->x) == (c)) && ((b->f->y) == (d))) && ((b->b->f->x) == (e))) && ((b->b->f->y) == (g)));;
  Bar*  bc=Bar::create(Foo::create((((a) != (10)) && (((e / (a - 10))) > (0)) ? a : e), 0), NULL);
  assert ((bc->b) == (NULL));;
  assert (((bc->f->x) != (10)) || ((e) == (10)));;
}

}
