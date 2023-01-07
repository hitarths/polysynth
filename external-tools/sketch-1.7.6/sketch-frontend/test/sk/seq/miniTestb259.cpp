#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb259.h"
namespace ANONYMOUS{

void testSK5(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  int  t0=0;
  if ((N) > (1)) {
    t0 = (in[0]);
    int  t1=0;
    if ((N) > (0)) {
      t1 = (in[1]);
      assert ((0) < (N));;
      (_out[0]) = 0;
      assert (((N - 2)) >= (0));;
      (_out[N - 2]) = 0;
      for (int  i=1;(i) < ((N - 1));i = i + 1){
        int  t2=(in[i + 1]);
        (_out[i]) = t0 + t2;
        t0 = t1;
        t1 = t2;
      }
    }
  }
  return;
}
void test5(int N, int* in/* len = N */, int* _out/* len = N */) {
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
