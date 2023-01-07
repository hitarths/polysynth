#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb123.h"
namespace ANONYMOUS{

FA* FA::create(bool  x_){
  void* temp= malloc( sizeof(FA)  ); 
  FA* rv = new (temp)FA();
  rv->x =  x_;
  return rv;
}
MA* MA::create(FA*  y_){
  void* temp= malloc( sizeof(MA)  ); 
  MA* rv = new (temp)MA();
  rv->y =  y_;
  return rv;
}
void sk(bool i, bool& _out) {
  MA*  m=MA::create(NULL);
  FA*  r=FA::create(0);
  r->x = i;
  m->y = r;
  _out = m->y->x;
  return;
}
void spec(bool i, bool& _out) {
  _out = i;
  return;
}

}
