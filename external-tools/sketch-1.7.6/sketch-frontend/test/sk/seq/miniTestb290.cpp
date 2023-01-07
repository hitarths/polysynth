#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb290.h"
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
  int  x=0;
  x = (x_s1 + x_s3) + a;
  assert ((x) == (((a + b) + a)));;
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
