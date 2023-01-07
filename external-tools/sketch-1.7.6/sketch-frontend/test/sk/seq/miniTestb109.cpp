#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb109.h"
namespace ANONYMOUS{

void foo(bool in, bool& _out) {
  _out = in;
  return;
}
void ka(bool in, bool& _out) {
  _out = in;
  return;
}

}
