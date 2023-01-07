#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb362.h"
namespace ANONYMOUS{

Foo* Foo::create(int  x_){
  void* temp= malloc( sizeof(Foo)  ); 
  Foo* rv = new (temp)Foo();
  rv->x =  x_;
  return rv;
}
void sketch(int x, int& _out) {
  Foo*  f=Foo::create(0);
  int  _out_s1=0;
  spec(x, _out_s1);
  f->x = _out_s1;
  _out = f->x;
  return;
}
void spec(int x, int& _out) {
  Foo*  f=Foo::create(0);
  f->x = x;
  _out = f->x;
  return;
}

}
