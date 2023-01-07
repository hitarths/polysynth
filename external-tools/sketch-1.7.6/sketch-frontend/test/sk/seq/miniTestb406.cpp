#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb406.h"
namespace PRIME{

A* A::create(int  a_, int  b_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->a =  a_;
  rv->b =  b_;
  return rv;
}
void foo2(int x, int y, int& _out) {
  _out = x + y;
  return;
}

}
namespace MAIN{

A* A::create(int  e_, int  f_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->e =  e_;
  rv->f =  f_;
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  A*  a1=A::create(x, x);
  PRIME::A*  a2=PRIME::A::create(x + 1, x + 1);
  BIS::A*  a3=BIS::A::create(x + 2, x + 2);
  int  rv_s1=0;
  BIS::call_foo32(a1, a2, a3, rv_s1);
  assert ((rv_s1) == (a2->a));;
  int  _out_s3=0;
  call(x, _out_s3);
  assert ((x) == (_out_s3));;
  int  _out_s5=0;
  foo1(x, _out_s5);
  assert (((x + x)) == (_out_s5));;
  int  _out_s7=0;
  call_foo3(x, _out_s7);
  assert (((x + x)) == (_out_s7));;
  int  _out_s9=0;
  BIS::call_foo31(x, _out_s9);
  assert (((x + x)) == (_out_s9));;
  int  _out_s11=0;
  PRIME::foo2(x, x, _out_s11);
  assert (((x + x)) == (_out_s11));;
}
void call(int x, int& _out) {
  _out = x;
  return;
}
void foo1(int x, int& _out) {
  _out = x + x;
  return;
}
void call_foo3(int x, int& _out) {
  _out = x + x;
  return;
}

}
namespace BIS{

A* A::create(int  c_, int  d_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->c =  c_;
  rv->d =  d_;
  return rv;
}
void call_foo32(MAIN::A* a10, PRIME::A* a22, A* a31, int& _out) {
  int  _out_s13=(a10->e + a31->c) - a22->a;
  _out = _out_s13;
  return;
}
void call_foo31(int x, int& _out) {
  _out = x + x;
  return;
}

}
