#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb183.h"
namespace ANONYMOUS{

void sk2(int x, int y, bool& _out) {
  _out = (((x + 20) - 15)) > (y);
  return;
}
void spec(int x, int y, bool& _out) {
  _out = ((x + 5)) > (y);
  return;
}
void sk1(int x, int y, bool& _out) {
  _out = ((x + 5)) > (y);
  return;
}

}
