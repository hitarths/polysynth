#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb202.h"
namespace ANONYMOUS{

void main_fun(bool a, bool b, bool c, bool& _out) {
  if (a) {
    _out = 1;
    return;
  } else {
    if (b) {
      _out = 1;
      return;
    } else {
      if (c) {
        _out = 1;
        return;
      } else {
        _out = 0;
        return;
      }
    }
  }
}
void VOID(bool a, bool b, bool c, bool& _out) {
  if (a ^ b) {
    _out = 1;
    return;
  } else {
    if (a) {
      _out = 1;
      return;
    }
    if (b ^ c) {
      if (a | c) {
        _out = 1;
        return;
      }
    }
  }
  _out = 0;
  return;
}

}
