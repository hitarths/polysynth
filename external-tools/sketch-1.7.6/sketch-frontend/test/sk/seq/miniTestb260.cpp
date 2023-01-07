#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb260.h"
namespace ANONYMOUS{

void testSK6(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N - 2));i = i + 1){
    (_out[i + 1]) = (in[i]);
  }
  for (int  i_0=2;(i_0) < ((N - 0));i_0 = i_0 + 1){
    (_out[i_0 - 1]) = (_out[(i_0 - 1)]) + (in[i_0]);
  }
  return;
}
void test6(int N, int* in/* len = N */, int* _out/* len = N */) {
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
