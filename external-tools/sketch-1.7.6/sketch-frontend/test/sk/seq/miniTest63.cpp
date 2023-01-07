#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest63.h"
namespace ANONYMOUS{

void tableSum(bool* in1_0/* len = 4 */, bool& _out) {
  bool*  in1= new bool [4]; CopyArr<bool >(in1,in1_0, 4, 4);
  int  k=0;
  if ((in1_0[0])) {
    if ((in1_0[1])) {
      k = 1;
    } else {
      k = 2;
    }
  } else {
    if ((in1_0[1])) {
      k = 0;
    } else {
      k = 1;
    }
  }
  (in1[1]) = (in1_0[3]);
  _out = (in1[k]);
  delete[] in1;
  return;
}
void sum(bool* in1_0/* len = 4 */, bool& _out) {
  bool*  in1= new bool [4]; CopyArr<bool >(in1,in1_0, 4, 4);
  (in1[1]) = (in1_0[3]);
  _out = (in1[(in1_0[0]) + !((in1_0[1]))]);
  delete[] in1;
  return;
}

}
