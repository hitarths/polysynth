#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest10.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  _out = (in[2]) ^ (in[3]);
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[2]) ^ (in[3]);
  return;
}

}
