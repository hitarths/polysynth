#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb210.h"
namespace ANONYMOUS{

void _main() {
  int  _out_s1=0;
  f1(1, _out_s1);
  int  _out_s3=0;
  f1(4, _out_s3);
  assert (((_out_s1 + _out_s3)) == (5));;
}
void VOID() {}
void f1(int in, int& _out) {
  int  _out_s5=0;
  fc145(in, _out_s5);
  _out = _out_s5;
  return;
}
void fc145(int in, int& _out) {
  _out = in;
  return;
}

}
