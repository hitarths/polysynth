#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb236.h"
namespace ANONYMOUS{

void testSK10(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  if ((N) > (0)) {
    (_out[0]) = 1;
    (_out[N - 1]) = 1;
  }
  for (int  i=1;(i) < ((N - 1));i = i + 1){
    (_out[i]) = (in[(i - 1)]) + (in[(i + 1)]);
  }
  return;
}
void test10(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < (N);i = i + 1){
    if (((i) > (0)) && ((i) < ((N - 1)))) {
      (_out[i]) = (in[(i - 1)]) + (in[(i + 1)]);
    } else {
      (_out[i]) = 1;
    }
  }
  return;
}

}
