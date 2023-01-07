#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb155.h"
namespace ANONYMOUS{

void moo(bool x, bool y, bool* _out/* len = 2 */) {
  CopyArr<bool >(_out,0, 2);
  (_out[0]) = (x & y) || y;
  (_out[1]) = x;
  return;
}
void foo(bool x, bool y, bool* _out/* len = 2 */) {
  CopyArr<bool >(_out,0, 2);
  bool  w=y || x;
  if (!(x)) {
    w = x;
  }
  bool  t=x & y;
  if (y) {
    t = y;
  }
  (_out[0]) = t;
  (_out[1]) = w;
  return;
}

}
