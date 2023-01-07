#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb226.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  bool  q=0;
  if ((x) > (5)) {
    int  q_s2=0;
    foo(x, 6, q_s2);
    bool  q_s4=0;
    moo(q_s2, q_s4);
    q = q_s4;
  }
  int  t=0;
  if (q || ((x) < (2))) {
    int  t_s6=0;
    foo(x, 6, t_s6);
    t = t_s6;
  }
  int  _pac_sc_s7_s9=0;
  foo(6, x, _pac_sc_s7_s9);
  bool  _pac_sc_s7=0;
  _pac_sc_s7 = (_pac_sc_s7_s9) > (5);
  if (_pac_sc_s7) {
    _pac_sc_s7 = (t) < (10);
  }
  bool  __sa0=_pac_sc_s7;
  while (__sa0) {
    int  t_s11=0;
    foo(6, x, t_s11);
    t = t + t_s11;
    int  _pac_sc_s12_s14=0;
    foo(6, x, _pac_sc_s12_s14);
    bool  _pac_sc_s12=0;
    _pac_sc_s12 = (_pac_sc_s12_s14) > (5);
    if (_pac_sc_s12) {
      _pac_sc_s12 = (t) < (10);
    }
    __sa0 = _pac_sc_s12;
  }
  assert ((t) > (0));;
}
void foo(int x, int y, int& _out) {
  assert ((x) != (2));;
  assert ((x) != (3));;
  assert ((x) != (4));;
  _out = x + y;
  return;
}
void moo(int x, bool& _out) {
  _out = (x) > (5);
  return;
}

}
