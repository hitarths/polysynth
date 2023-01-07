#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb212.h"
namespace ANONYMOUS{

void fooSK(bool& _out) {
  _out = 0;
  return;
}
void foo(bool& _out) {
  bool _tt0[3] = {1, 1, 1};
  bool*  x= new bool [3]; CopyArr<bool >(x,_tt0, 3, 3);
  bool _tt1[3] = {1, 1, 0};
  bool*  y= new bool [3]; CopyArr<bool >(y,_tt1, 3, 3);
  if (arrCompare(x, 3, y, 3) && ((3) == (3))) {
    _out = 1;
  delete[] x;
  delete[] y;
    return;
  }
  _out = 0;
  delete[] x;
  delete[] y;
  return;
}

}
