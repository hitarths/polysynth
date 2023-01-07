#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest2.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  bool*  tmp= new bool [4]; CopyArr<bool >(tmp,in, 4, 4);
  (tmp[2]) = 1;
  (tmp[3]) = 0;
  _out = (tmp[1]);
  delete[] tmp;
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[1]);
  return;
}

}
