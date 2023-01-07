#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb243.h"
namespace ANONYMOUS{

void testSK(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N - 3));i = i + 1){
    (_out[i]) = (in[i + 3]);
  }
  return;
}
void test(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N - 3));i = i + 1){
    (_out[i]) = (in[i + 3]);
  }
  return;
}

}
