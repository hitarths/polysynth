#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb363.h"
namespace FOFO{

Foo* Foo::create(int  x_){
  void* temp= malloc( sizeof(Foo)  ); 
  Foo* rv = new (temp)Foo();
  rv->x =  x_;
  return rv;
}
void spec(int x, int& _out) {
  Foo*  f=Foo::create(0);
  f->x = x;
  _out = f->x + 1;
  return;
}

}
namespace LALA{

Foo* Foo::create(int  x_){
  void* temp= malloc( sizeof(Foo)  ); 
  Foo* rv = new (temp)Foo();
  rv->x =  x_;
  return rv;
}
void sketch(int x, int& _out) {
  Foo*  f=Foo::create(0);
  int  _out_s1=0;
  FOFO::spec(x, _out_s1);
  f->x = _out_s1 - 1;
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
