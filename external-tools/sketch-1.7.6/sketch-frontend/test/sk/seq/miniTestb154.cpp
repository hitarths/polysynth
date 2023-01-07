#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb154.h"
namespace ANONYMOUS{

void moo(bool x, bool y, bool& _out) {
  _out = (y & x) || y;
  return;
}
void foo(bool x, bool y, bool& _out) {
  _out = y & x;
  if (y) {
    _out = y;
  }
  return;
}

}
