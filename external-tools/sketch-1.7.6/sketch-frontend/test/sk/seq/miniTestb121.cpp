#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb121.h"
namespace ANONYMOUS{

void moo(int a, int b, int& _out) {
  int  rv_s1=0;
  op(a, b, rv_s1);
  int  rv_s3=0;
  op(rv_s1, a, rv_s3);
  int  rv_s5=0;
  op(rv_s3, b, rv_s5);
  _out = rv_s5;
  return;
}
void foo(int a, int b, int& _out) {
  _out = ((a + b) + a) + b;
  return;
}
void op(int a, int b, int& _out) {
  _out = a + b;
  return;
}

}
