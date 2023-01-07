#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest13.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 5 */, bool& _out) {
  _out = (in[4]) ^ (in[2]);
  return;
}
void reverse(bool* in/* len = 5 */, bool& _out) {
  _out = (in[4]) ^ (in[2]);
  return;
}

}
