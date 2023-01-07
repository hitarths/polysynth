#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb314.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  int*  op= new int [4]; CopyArr<int >(op,0, 4);
  if (((in) < (4)) && (((op[in])) == (0))) {
    (op[in]) = 1;
  }
  bool  _pac_sc_s0=(in) != (0);
  if (!(_pac_sc_s0)) {
    int  _pac_sc_s0_s2=0;
    moo(in, _pac_sc_s0_s2);
    _pac_sc_s0 = (_pac_sc_s0_s2) > (in);
  }
  if (_pac_sc_s0) {
    int  _out_s4=0;
    foo(in, _out_s4);
    assert ((_out_s4) == (in));;
  }
}
void moo(int in, int& _out) {
  assert ((in) == (0));;
  _out = in;
  return;
}
void foo(int in, int& _out) {
  _out = in;
  return;
}

}
