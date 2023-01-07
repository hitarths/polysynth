#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest31.h"
namespace ANONYMOUS{

void miniTestSK(bool* in/* len = 4 */, bool& _out) {
  bool  x=0;
  if ((in[0])) {
    x = (in[2]);
  } else {
    x = 1;
  }
  assert ((in[0]) || x);;
  _out = (in[x]);
  return;
}
void miniTest(bool* in/* len = 4 */, bool& _out) {
  bool  x=0;
  if (!((in[0]))) {
    x = 1;
  } else {
    x = (in[2]);
  }
  _out = (in[x]);
  return;
}

}
