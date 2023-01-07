#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb241.h"
namespace ANONYMOUS{

void testSK15(int N, int* in/* len = N + 3 */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  if ((N) > (0)) {
    (_out[0]) = (in[0]);
    (_out[N - 1]) = (in[N - 1]);
    for (int  i=1;(i) < ((N - 1));i = i + 1){
      (_out[i]) = (in[i + 3]);
    }
  }
  return;
}
void test15(int N, int* in/* len = N + 3 */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (_out[i]) = (in[i + 3]);
    if ((i) == (0)) {
      (_out[0]) = (in[0]);
    }
    if ((i) == ((N - 1))) {
      (_out[i]) = (in[N - 1]);
    }
  }
  return;
}

}
