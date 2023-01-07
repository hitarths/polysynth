#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb380.h"
namespace ANONYMOUS{

void cacheObv1dSK(int N, float* in/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  forLoop_t21(0, N, N, in, _out);
  return;
}
void cacheObv1d(int N, float* in/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  for (int  j=0;(j) < (N);j = j + 1){
    (_out[j]) = (in[j]) + 0.5f;
  }
  return;
}
void forLoop_t21(int low, int high, int N1, float* in2_0/* len = N1 */, float* out0/* len = N1 */) {
  if ((low) < (high)) {
    (out0[low]) = (in2_0[low]) + 0.5f;
    forLoop_t21(low + 1, high, N1, in2_0, out0);
  }
}

}
