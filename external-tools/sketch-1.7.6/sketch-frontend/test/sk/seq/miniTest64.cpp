#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest64.h"
namespace ANONYMOUS{

void tableSum(bool* in/* len = 4 */, bool& _out) {
  bool  x3=((in[1]) && (in[2])) ^ ((in[1]) && (in[2]));
  x3 = !(x3);
  if ((x3) > (0)) {
    _out = 1;
  } else {
    _out = 0;
  }
  return;
}
void sum(bool* in/* len = 4 */, bool& _out) {
  _out = 1;
  return;
}

}
