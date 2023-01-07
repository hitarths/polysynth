#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb334.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  if ((in) > (5)) {
    int  _out_s1=0;
    foo(in, _out_s1);
    if ((_out_s1) > (0)) {
      int  _out_s3=0;
      foo(in, _out_s3);
      if ((_out_s3) < (10)) {
        int  _out_s5=0;
        foo(in, _out_s5);
      }
    }
  }
}
void foo(int in_0, int& _out) {
  int  in=in_0;
  int  x=in_0;
  if ((in_0) > (5)) {
    int  in_s7=0;
    moo(in_0, x, in_s7);
    in = in_s7;
  }
  _out = in;
  return;
}
void moo(int in, int& tmp, int& _out) {
  tmp = in;
  if (((in + (15 - in))) != (15)) {
    int  _out_s9=0;
    moo(in, tmp, _out_s9);
    _out = _out_s9;
    return;
  } else {
    _out = in;
    return;
  }
}

}
