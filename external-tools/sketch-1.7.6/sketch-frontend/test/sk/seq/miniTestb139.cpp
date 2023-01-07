#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb139.h"
namespace ANONYMOUS{

void foo(int i, int& _out) {
  assert (!(((2 * i)) == (((i + 1) - i))));;
  _out = i;
  return;
}
void moo(int i, int& _out) {
  _out = i;
  return;
}

}
