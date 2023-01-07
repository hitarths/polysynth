#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest61.h"
namespace ANONYMOUS{

void test2(bool* x_0/* len = 3 */, bool& _out) {
  bool*  x= new bool [3]; CopyArr<bool >(x,x_0, 3, 3);
  (x[1]) = !(1) ^ (x_0[2]);
  _out = (x[1]);
  delete[] x;
  return;
}
void alwaysOne(bool* x/* len = 3 */, bool& _out) {
  _out = (x[2]);
  return;
}

}
