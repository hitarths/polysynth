#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb164.h"
namespace ANONYMOUS{

void spec(int x, int& _out) {
  if ((x) > (5)) {
    _out = x;
    return;
  }
  if ((x) < (4)) {
    _out = x - 1;
    return;
  }
  _out = 2;
  return;
}
void test(int x_0, int& _out) {
  int  x=x_0;
  while ((x) < (6)) {
    x = x - 1;
    if ((x) < (3)) {
      _out = x;
      return;
    }
  }
  _out = x;
  return;
}

}
