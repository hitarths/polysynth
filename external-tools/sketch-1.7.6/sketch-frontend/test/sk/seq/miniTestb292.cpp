#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb292.h"
namespace ANONYMOUS{

void test__Wrapper(int a, int b) {
  test(a, b);
}
void test__WrapperNospec(int a, int b) {}
void test(int a, int b) {
  int  x_s1=0;
  FOO::foo(a, x_s1);
  int  x_s3=0;
  BOO_MOO::moo(b, x_s3);
  int  x_s5=0;
  boo_foo(a, b, x_s5);
  int  x=0;
  x = (x_s1 + x_s3) + x_s5;
  assert ((x) == (((a + b) + a)));;
}
void boo_foo(int x, int y, int& _out) {
  int  _out_s7=0;
  FOO::foo(x, _out_s7);
  int  _out_s9=0;
  FOO::foo(y, _out_s9);
  _out = _out_s7;
  return;
}

}
namespace FOO{

void foo(int x, int& _out) {
  _out = x;
  return;
}

}
namespace BOO_MOO{

void moo(int y, int& _out) {
  _out = y;
  return;
}

}
