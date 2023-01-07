#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest32.h"
namespace ANONYMOUS{

void miniTestSK(bool* in/* len = 4 */, bool& _out) {
  bool  x=0;
  if ((in[0])) {
    x = 0;
  } else {
    x = 1;
  }
  assert ((x) == (!((in[0]))));;
  _out = (in[x]);
  return;
}
void miniTest(bool* in/* len = 4 */, bool& _out) {
  _out = (in[!((in[0]))]);
  return;
}

}
