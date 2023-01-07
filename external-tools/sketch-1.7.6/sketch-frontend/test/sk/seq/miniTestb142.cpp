#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb142.h"
namespace ANONYMOUS{

Box* Box::create(int  v_){
  void* temp= malloc( sizeof(Box)  ); 
  Box* rv = new (temp)Box();
  rv->v =  v_;
  return rv;
}
void foo(int i, int& _out) {
  Box*  t=Box::create(0);
  t->v = i;
  if ((i) < ((i + 1))) {
    assert ((t->v) > ((t->v - 1)));;
    _out = t->v;
    return;
  }
  assert ((t->v) < ((t->v - 1)));;
  _out = t->v;
  return;
}
void spec(int i, int& _out) {
  _out = i;
  return;
}

}
