#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb298.h"
namespace ANONYMOUS{

void sk3(int x, int& _out) {
  int  _out_s1=0;
  sk(x, _out_s1);
  _out = 2 * _out_s1;
  return;
}
void sk2(int x, int& _out) {
  int  _out_s3=0;
  sk(x, _out_s3);
  int  _out_s5=0;
  sk(x, _out_s5);
  _out = _out_s3 + _out_s5;
  return;
}
void sk(int x, int& _out) {
  _out = (x - 2) + 2;
  return;
}

}
namespace FOO{

void foo(int x, int& _out) {
  _out = x;
  return;
}

}
