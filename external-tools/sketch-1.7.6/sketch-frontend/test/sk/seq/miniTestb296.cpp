#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb296.h"
namespace ANONYMOUS{

F* F::create(int  q_){
  void* temp= malloc( sizeof(F)  ); 
  F* rv = new (temp)F();
  rv->q =  q_;
  return rv;
}
void main__Wrapper(int v) {
  _main(v);
}
void main__WrapperNospec(int v) {}
void _main(int v) {
  F*  tt=F::create(0);
  setX(tt, v);
  BOO::F*  uu=BOO::F::create(0, 0);
  BOO::setX(uu, v);
  int  _out_s1=0;
  BOO::getX(uu, _out_s1);
  assert ((v) == (_out_s1));;
  BOO::Big*  t=BOO::Big::create(NULL);
  BOO::init(t);
  BOO::setV(t, v);
  int  _out_s3=0;
  BOO::getV(t, _out_s3);
  assert ((v) == (_out_s3));;
  int  _out_s5=0;
  BOO::getV(t, _out_s5);
  assert ((tt->q) == (_out_s5));;
}
void setX(F* pthis, int v) {
  pthis->q = v;
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
Big* Big::create(F*  f_){
  void* temp= malloc( sizeof(Big)  ); 
  Big* rv = new (temp)Big();
  rv->f =  f_;
  return rv;
}
void setX(F* pthis, int v) {
  pthis->x = v;
}
void getX(F* pthis, int& _out) {
  _out = pthis->x;
  return;
}
void init(Big* pthis) {
  pthis->f = F::create(0, 0);
}
void setV(Big* pthis, int v) {
  pthis->f->x = v;
}
void getV(Big* pthis, int& _out) {
  _out = pthis->f->x;
  return;
}

}
