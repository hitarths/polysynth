#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb159.h"
namespace ANONYMOUS{

void test(int t0, bool& _out) {
  bool*  out= new bool [7]; CopyArr<bool >(out,0, 7);
  (out[5]) = 1;
  _out = (out[5]);
  delete[] out;
  return;
}
void spec(int t, bool& _out) {
  _out = 1;
  return;
}

}
