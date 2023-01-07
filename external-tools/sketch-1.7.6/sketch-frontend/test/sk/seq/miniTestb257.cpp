#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb257.h"
namespace ANONYMOUS{

void testSK3(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N - 2));i = i + 1){
    (_out[i + 1]) = (in[i]);
  }
  for (int  j=2;(j) < ((N - 0));j = j + 1){
    (_out[j - 1]) = (_out[(j - 1)]) + (in[j]);
  }
  return;
}
void test3(int N, int* in/* len = N */, int* _out/* len = N */) {
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
