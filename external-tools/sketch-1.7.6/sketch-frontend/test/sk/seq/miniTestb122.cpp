#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb122.h"
namespace ANONYMOUS{

FA* FA::create(bool  x_){
  void* temp= malloc( sizeof(FA)  ); 
  FA* rv = new (temp)FA();
  rv->x =  x_;
  return rv;
}
void sk(bool i, bool& _out) {
  FA*  r=FA::create(0);
  r->x = i;
  _out = r->x;
  return;
}
void spec(bool i, bool& _out) {
  _out = i;
  return;
}

}
