#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb407.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int* y/* len = x */) {
  _main(x, y);
}
void main__WrapperNospec(int x, int* y/* len = x */) {}
void _main(int x, int* y/* len = x */) {
  int  _out_s1=0;
  foo(x, _out_s1);
  int*  _out_s3= new int [x]; CopyArr<int >(_out_s3,0, x);
  boo(x, _out_s3);
  if (arrCompare(_out_s3, x, y, x) && ((x) == (x))) {
    int  _out_s5=0;
    moo(x, _out_s5);
    int  _out_s7=0;
    mar(x, _out_s7);
    assert ((_out_s5) == (_out_s7));;
  }
  int  t_s9=0;
  bar(x, t_s9);
  if ((x) == (7)) {
    assert ((t_s9) == (12));;
  }
  if ((x) == (6)) {
    assert ((t_s9) == (0));;
  }
  if ((x) == (1)) {
    assert ((t_s9) == (2));;
  }
  int  _out_s11=0;
  tar(x, _out_s11);
  assert ((_out_s11) == ((x + 1)));;
}
void foo(int x, int& _out) {
  _out = x + 1;
  return;
}
void boo(int x, int* _out/* len = x */) {
  CopyArr<int >(_out,0, x);
  for (int  i=0;(i) < (x);i = i + 1){
    (_out[i]) = i;
  }
  return;
}
void moo(int x, int& _out) {
  _out = x;
  return;
}
void mar(int x, int& _out) {
  _out = x;
  return;
}
void bar(int x, int& _out) {
  if ((x) > (5)) {
    int  y0=10;
    if ((x) == (6)) {
      y0 = 11;
    }
    if ((x) == (7)) {
      y0 = y0 + 2;
      _out = y0;
      return;
    }
  }
  int  y=0;
  if ((x) == (1)) {
    y = 2;
  }
  _out = y;
  return;
}
void tar(int x0, int& _out) {
  _out = 0;
  for (int  t=x0;(t) < ((x0 + 10));t = t + 1){
    t = t + 1;
    _out = t;
    return;
  }
}

}
