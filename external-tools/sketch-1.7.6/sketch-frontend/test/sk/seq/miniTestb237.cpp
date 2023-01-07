#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb237.h"
namespace ANONYMOUS{

void testSK11(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N - 3));i = i + 1){
    int  x=(in[i + 3]);
    (_out[i]) = x + x;
  }
  return;
}
void test11(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N - 3));i = i + 1){
    (_out[i]) = (in[(i + 3)]) + (in[(i + 3)]);
  }
  return;
}

}
