#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest24.h"
namespace ANONYMOUS{

void testSK(bool* in/* len = 4 */, bool& _out) {
  _out = (in[3]);
  return;
}
void test(bool* in/* len = 4 */, bool& _out) {
  _out = (in[3]);
  return;
}

}
