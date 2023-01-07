#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb242.h"
namespace ANONYMOUS{

void testSK1(int N, float* in/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  for (int  i=1;(i) < ((N - 1));i = i + 1){
    (_out[i]) = (0.5f * (in[(i - 1)])) + (0.5f * (in[(i + 1)]));
  }
  return;
}
void test1(int N, float* in/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  for (int  i=1;(i) < ((N - 1));i = i + 1){
    (_out[i]) = (0.5f * (in[(i - 1)])) + (0.5f * (in[(i + 1)]));
  }
  return;
}

}
