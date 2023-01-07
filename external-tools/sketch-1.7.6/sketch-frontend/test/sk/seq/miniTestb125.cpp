#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb125.h"
namespace ANONYMOUS{

foo* foo::create(int  x_, int  y_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  rv->y =  y_;
  return rv;
}
void sketch(int i, bool& _out) {
  foo*  x=foo::create(0, 0);
  x->x = i;
  x->y = 3;
  bool  _has_out_=0;
  if ((x->y) == (3)) {
    _has_out_ = 1;
  }
  if ((_has_out_) == (0)) {
    assert ((x->x) != (1));;
  }
  _out = 1;
  return;
}
void spec(int i, bool& _out) {
  _out = 1;
  return;
}

}
