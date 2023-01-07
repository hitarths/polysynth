#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest51.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 3 */, bool* in2/* len = 3 */, bool& _out) {
  int _tt0[8] = {0, 1, 2, 2, 2, 2, 2, 2};
  int*  fu= new int [8]; CopyArr<int >(fu,_tt0, 8, 8);
  int  idx1=bvToInt(in, 3);
  int  idx=0;
  idx = (fu[idx1]);
  _out = (in2[idx]);
  delete[] fu;
  return;
}
void reverse(bool* in/* len = 3 */, bool* in2/* len = 3 */, bool& _out) {
  int  idx1=bvToInt(in, 3);
  int  idx=0;
  idx = idx1;
  if ((idx1) > (2)) {
    idx = 2;
  }
  _out = (in2[idx]);
  return;
}

}
