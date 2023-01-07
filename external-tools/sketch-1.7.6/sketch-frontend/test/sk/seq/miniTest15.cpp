#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest15.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  bool*  tmp= new bool [2]; CopyArr<bool >(tmp,0, 2);
  (tmp[0]) = 1;
  (tmp[1]) = 1;
  _out = (in[bvToInt(tmp, 2)]);
  delete[] tmp;
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[3]);
  return;
}

}
