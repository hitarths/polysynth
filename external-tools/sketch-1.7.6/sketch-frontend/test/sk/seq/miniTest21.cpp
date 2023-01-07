#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest21.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 3 */, bool* in2/* len = 3 */, bool& _out) {
  int*  fu= new int [8]; CopyArr<int >(fu,0, 8);
  (fu[0]) = 2;
  (fu[1]) = 1;
  (fu[2]) = 1;
  (fu[3]) = 0;
  (fu[4]) = 1;
  (fu[5]) = 2;
  (fu[6]) = 2;
  (fu[7]) = 0;
  int  idx1=bvToInt(in, 3);
  int  idx=0;
  idx = (fu[idx1]);
  _out = (in2[idx]);
  delete[] fu;
  return;
}
void reverse(bool* in/* len = 3 */, bool* in2/* len = 3 */, bool& _out) {
  int _tt0[8] = {2, 1, 1, 0, 1, 2, 2, 0};
  int*  fu= new int [8]; CopyArr<int >(fu,_tt0, 8, 8);
  int  idx1=bvToInt(in, 3);
  int  idx=0;
  idx = (fu[idx1]);
  _out = (in2[idx]);
  delete[] fu;
  return;
}

}
