#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb131.h"
namespace ANONYMOUS{

voo* voo::create(int  x_){
  void* temp= malloc( sizeof(voo)  ); 
  voo* rv = new (temp)voo();
  rv->x =  x_;
  return rv;
}
void sketch(int i, int& _out) {
  voo*  t=voo::create(0);
  foo(t, i);
  _out = t->x;
  return;
}
void spec(int i, int& _out) {
  _out = i;
  return;
}
void foo(voo* t, int i) {
  t->x = i;
}

}
