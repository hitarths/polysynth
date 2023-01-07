#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb439.h"
namespace ANONYMOUS{

void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void _main(int i, int j) {
  bool  t=0;
  if (((j) == (0)) || ((i) == (0))) {
    bool  t_s1=0;
    foo(i, t_s1);
    t = t_s1;
  }
  bool  _pac_sc_s2=t;
  if (t) {
    bool  _pac_sc_s2_s4=0;
    moo(i, _pac_sc_s2_s4);
    _pac_sc_s2 = _pac_sc_s2_s4;
  }
  int  x=0;
  if (_pac_sc_s2) {
    bool  x_s6=0;
    foo(i, x_s6);
    x = x_s6 + j;
  }
  if ((i) == (0)) {
    assert (((j + 1)) == (x));;
  }
}
void foo(int i, bool& _out) {
  _out = (i) == (0);
  return;
}
void moo(int i, bool& _out) {
  _out = (i) == (0);
  return;
}

}
