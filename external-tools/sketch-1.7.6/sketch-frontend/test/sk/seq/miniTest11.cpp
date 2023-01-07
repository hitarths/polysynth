#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest11.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  bool*  tmp_s3= new bool [2]; CopyArr<bool >(tmp_s3,0, 2);
  (tmp_s3[0]) = (in[0]);
  (tmp_s3[1]) = (in[2]);
  _out = (tmp_s3[1]);
  delete[] tmp_s3;
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[2]);
  return;
}

}
