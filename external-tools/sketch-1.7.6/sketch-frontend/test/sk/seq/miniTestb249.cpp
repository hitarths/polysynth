#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb249.h"
namespace ANONYMOUS{

void testSK0(int N, float* a/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (_out[i]) = (a[i]);
  }
  return;
}
void test0(int N, float* a/* len = N */, float* _out/* len = N */) {
  CopyArr<float >(_out,0.0f, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (_out[i]) = (a[i]);
  }
  return;
}

}
