#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest74.h"
namespace ANONYMOUS{

void sk1(bool* in/* len = 4 */, bool& _out) {
  _out = (in[3]);
  bool  tmp_s1=0;
  sk2(in, tmp_s1);
  _out = _out ^ tmp_s1;
  return;
}
void sp1(bool* in/* len = 4 */, bool& _out) {
  _out = (in[3]) ^ (in[1]);
  return;
}
void sk2(bool* in/* len = 4 */, bool& _out) {
  bool*  tmp= new bool [4]; CopyArr<bool >(tmp,in, 4, 4);
  (tmp[2]) = 1;
  (tmp[3]) = 0;
  _out = (tmp[1]);
  delete[] tmp;
  return;
}
void sp2(bool* in/* len = 4 */, bool& _out) {
  _out = (in[1]);
  return;
}

}
