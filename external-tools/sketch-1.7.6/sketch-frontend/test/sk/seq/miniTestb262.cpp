#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb262.h"
namespace ANONYMOUS{

void testSK8(int N, int* in/* len = N */, int a, int b, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=1;(i) < ((N - 1));i = i + 1){
    (_out[i]) = (a * (in[(i - 1)])) + (b * (in[(i + 1)]));
  }
  return;
}
void test8(int N, int* in/* len = N */, int a, int b, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < (N);i = i + 1){
    if (((i) > (0)) && ((i) < ((N - 1)))) {
      (_out[i]) = (a * (in[(i - 1)])) + (b * (in[(i + 1)]));
    } else {
      (_out[i]) = 0;
    }
  }
  return;
}

}
