#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb355.h"
namespace t_cat_me{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int  _pac_sc_s0=0;
  if ((i) == (0)) {
    _pac_sc_s0 = 7;
  } else {
    int  _out_s2=0;
    foo(_out_s2);
    _pac_sc_s0 = _out_s2;
  }
  assert ((_pac_sc_s0) <= (8));;
  int  _pac_sc_s3=0;
  if ((i) == (0)) {
    int  _out_s5=0;
    foo(_out_s5);
    _pac_sc_s3 = _out_s5;
  } else {
    int  _out_s7=0;
    foo(_out_s7);
    _pac_sc_s3 = _out_s7;
  }
  assert ((_pac_sc_s3) <= (8));;
  assert (((((i) == (0)) ? 8 : 7)) <= (8));;
}
void foo(int& _out) {
  _out = 7;
  return;
}

}
