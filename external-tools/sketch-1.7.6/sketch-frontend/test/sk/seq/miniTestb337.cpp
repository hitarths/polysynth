#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb337.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  bool  t_s1=0;
  foo(t_s1);
  if (t_s1) {
    bool  _out_s3=0;
    moo(_out_s3);
    assert (_out_s3);;
  }
}
void foo(bool& _out) {
  _out = 0;
  return;
}
void moo(bool& _out) {
  bool  _out_s5=0;
  foo(_out_s5);
  _out = _out_s5;
  return;
}

}
