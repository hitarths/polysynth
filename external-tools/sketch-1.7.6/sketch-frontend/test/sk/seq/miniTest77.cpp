#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest77.h"
namespace ANONYMOUS{

void test(int in, bool i2, int& _out) {
  int  t=(i2 ? ((int) (1)) : 2);
  _out = ((in + 1) - t) + 1;
  return;
}
void spec(int in, bool i2, int& _out) {
  int  t=(i2 ? 0 : 1);
  _out = (in + 1) - t;
  return;
}

}
