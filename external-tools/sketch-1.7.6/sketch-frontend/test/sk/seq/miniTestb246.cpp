#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb246.h"
namespace ANONYMOUS{

void testSK16(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  if ((N) >= (4)) {
    (_out[2]) = (in[1]);
    (_out[1]) = (in[0]);
    for (int  i=2;(i) < ((N - 2));i = i + 1){
      (_out[i - 1]) = (_out[(i - 1)]) + (in[i]);
      (_out[i + 1]) = (in[i]);
    }
    (_out[-3 + N]) = (_out[(-3 + N)]) + (in[(-2 + N)]);
    (_out[-2 + N]) = (_out[(-2 + N)]) + (in[(-1 + N)]);
  } else {
    for (int  i_0=1;(i_0) < ((N - 1));i_0 = i_0 + 1){
      (_out[i_0]) = (in[(i_0 - 1)]) + (in[(i_0 + 1)]);
    }
  }
  return;
}
void test16(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < (N);i = i + 1){
    if (((i) > (0)) && ((i) < ((N - 1)))) {
      (_out[i]) = (in[(i - 1)]) + (in[(i + 1)]);
    } else {
      (_out[i]) = 0;
    }
  }
  return;
}

}
