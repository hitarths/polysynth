#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest5.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  _out = (in[3]) ^ (in[2]);
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[2]) ^ (in[3]);
  return;
}

}
