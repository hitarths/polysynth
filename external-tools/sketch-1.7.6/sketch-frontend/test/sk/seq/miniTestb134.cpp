#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb134.h"
namespace ANONYMOUS{

voo* voo::create(int  x_, voo*  next_, voo*  prev_){
  void* temp= malloc( sizeof(voo)  ); 
  voo* rv = new (temp)voo();
  rv->x =  x_;
  rv->next =  next_;
  rv->prev =  prev_;
  return rv;
}
void sketch(int i, int& _out) {
  voo*  t=voo::create(0, NULL, NULL);
  foo(t, i + 1);
  _out = t->x;
  return;
}
void spec(int i, int& _out) {
  _out = i + 1;
  return;
}
void foo(voo* x, int i) {
  x->x = i;
}

}
