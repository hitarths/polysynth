#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb190.h"
namespace ANONYMOUS{

void sketch(int x, int y, int& _out) {
  int  r=y - 1;
  r = r + x;
  r = r + 1;
  _out = 3 + r;
  return;
}
void spec(int x, int y, int& _out) {
  _out = x + y;
  _out = _out + 3;
  return;
}

}
