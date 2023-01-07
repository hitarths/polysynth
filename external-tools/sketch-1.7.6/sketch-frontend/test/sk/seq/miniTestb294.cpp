#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb294.h"
namespace ANONYMOUS{

void main__Wrapper(int v) {
  _main(v);
}
void main__WrapperNospec(int v) {}
void _main(int v) {
  BOO::F*  t=BOO::F::create(0, 0);
  BOO::setX(t, v);
  int  _out_s1=0;
  BOO::getX(t, _out_s1);
  assert ((v) == (_out_s1));;
}

}
namespace BOO{

F* F::create(int  x_, int  y_){
  void* temp= malloc( sizeof(F)  ); 
  F* rv = new (temp)F();
  rv->x =  x_;
  rv->y =  y_;
  return rv;
}
void setX(F* pthis, int v) {
  pthis->x = v;
}
void getX(F* pthis, int& _out) {
  _out = pthis->x;
  return;
}

}
