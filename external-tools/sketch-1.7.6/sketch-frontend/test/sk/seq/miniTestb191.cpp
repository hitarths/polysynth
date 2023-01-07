#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb191.h"
namespace ANONYMOUS{

void sketch(int x, int y, int& _out) {
  _out = (x + y) + 3;
  return;
}
void spec(int x, int y, int& _out) {
  _out = x + y;
  _out = _out + 3;
  return;
}

}
