#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb136.h"
namespace ANONYMOUS{

void sk(bool a, bool b, bool c, bool d, bool& _out) {
  _out = ((a & c) & b) & d;
  return;
}
void test(bool a, bool b, bool c, bool d, bool& _out) {
  _out = (a & b) & (c & d);
  return;
}

}
