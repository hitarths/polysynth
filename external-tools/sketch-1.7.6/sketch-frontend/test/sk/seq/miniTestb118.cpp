#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb118.h"
namespace ANONYMOUS{

void trailing_zero_bits_sketch(bool* in/* len = 4 */, int& _out) {
  _out = 0;
  if (!((in[0]))) {
    _out = 1;
  } else {
    return;
  }
  if (!((in[_out]))) {
    _out = _out + 1;
  } else {
    return;
  }
  if (!((in[_out]))) {
    _out = _out + 1;
  } else {
    return;
  }
  if (!((in[_out]))) {
    _out = _out + 1;
  } else {
    return;
  }
  return;
}
void trailing_zero_bits(bool* in/* len = 4 */, int& _out) {
  _out = 0;
  bool  __sa0=!((in[0]));
  while (__sa0) {
    _out = _out + 1;
    __sa0 = ((_out) < (4)) && !((in[_out]));
  }
  return;
}

}
