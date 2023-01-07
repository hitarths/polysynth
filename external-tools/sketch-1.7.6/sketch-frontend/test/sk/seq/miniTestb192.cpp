#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb192.h"
namespace ANONYMOUS{

void sketch(int x, int y, int& _out) {
  _out = 3 + (x + y);
  return;
}
void spec(int x, int y, int& _out) {
  _out = x + y;
  _out = _out + 3;
  return;
}

}
