#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb401.h"
namespace ANONYMOUS{

void main__Wrapper(int in, int y) {
  _main(in, y);
}
void main__WrapperNospec(int in, int y) {}
void _main(int in, int y) {
  int  _out_s1=0;
  foo_abs1(in - 5, _out_s1);
  assert ((_out_s1) >= (0));;
  int  _out_s3=0;
  foo_other2(in, y, _out_s3);
  assert ((_out_s3) == ((in + y)));;
}
void foo_abs1(int v, int& _out) {
  int  _out_s7=0;
  abs1(v, _out_s7);
  _out = _out_s7;
  return;
}
void foo_other2(int v, int y0, int& _out) {
  int  _out_s5=0;
  other2(v, y0, _out_s5);
  _out = _out_s5;
  return;
}
void abs1(int x, int& _out) { printf("Oh\n"); _out=x>0?x:-x;}
void other2(int x, int y, int& _out) {
  _out = x + y;
  return;
}

}
