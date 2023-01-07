#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb147.h"
namespace ANONYMOUS{

void moo(int i_0, int j, int k, int& _out) {
  if (((i_0 + j)) != (2)) {
    _out = i_0 + 2;
    return;
  }
  _out = (i_0 + (2 * j)) + (3 * k);
  return;
}
void foo(int i, int j, int k, int& _out) {
  if (((i + j)) != (2)) {
    _out = i + 2;
    return;
  }
  _out = (i + (2 * j)) + (3 * k);
  return;
}

}
