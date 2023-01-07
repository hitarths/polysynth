#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb238.h"
namespace ANONYMOUS{

void testSK12(int N, float* in/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  for (int  i=0;(i) < ((N - 3));i = i + 1){
    (_out[i]) = (in[i + 3]);
  }
  return;
}
void test12(int N, float* in/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  for (int  i=0;(i) < ((N - 3));i = i + 1){
    (_out[i]) = (in[i + 3]);
  }
  return;
}

}
