#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb276.h"
namespace ANONYMOUS{

void main1__Wrapper(int x, int y) {
  main1(x, y);
}
void main1__WrapperNospec(int x, int y) {}
void main1(int x, int y) {
  int  _out_s1=0;
  comp(x, y, _out_s1);
  int  _out_s3=0;
  comp(y, x, _out_s3);
  assert ((_out_s1) == (_out_s3));;
}
void comp(int x, int y, int& _out) {
  int  t=0;
  if ((x) > (y)) {
    int  t_s5=0;
    foo(x, y, t_s5);
    t = t_s5;
  } else {
    int  t_s7=0;
    foo(y, x, t_s7);
    t = t_s7;
  }
  if ((t) >= (x)) {
    int  _out_s9=0;
    foo(y, x, _out_s9);
    _out = t + _out_s9;
    return;
  }
  int  _out_s11=0;
  foo(x, y, _out_s11);
  _out = t + _out_s11;
  return;
}
void foo(int x, int y, int& _out) {
  assert ((x) >= (y));;
  _out = (x + y) / 2;
  return;
}

}
