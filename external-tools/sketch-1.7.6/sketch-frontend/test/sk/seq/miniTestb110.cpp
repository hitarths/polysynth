#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb110.h"
namespace ANONYMOUS{

void testSK(bool* in/* len = 5 */, bool& _out) {
  int _tt0[5] = {-1, -1, -1, -1, -1};
  int*  fa= new int [5]; CopyArr<int >(fa,_tt0, 5, 5);
  if ((in[0])) {
    (fa[0]) = 2;
  } else {
    (fa[0]) = 3;
  }
  int  p=(fa[0]);
  if ((p) >= (0)) {
    (fa[p]) = 2;
  }
  _out = (((fa[2])) == (2)) || (((fa[3])) == (2));
  delete[] fa;
  return;
}
void test(bool* in/* len = 5 */, bool& _out) {
  _out = 1;
  return;
}

}
