#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb145.h"
namespace ANONYMOUS{

foo* foo::create(foo*  x_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  return rv;
}
void t(bool& _out) {
  foo*  t=foo::create(NULL);
  foo*  v=foo::create(NULL);
  _out = ((t->x) == (NULL)) && ((v->x) == (NULL));
  return;
}
void one(bool& _out) {
  _out = 1;
  return;
}

}
