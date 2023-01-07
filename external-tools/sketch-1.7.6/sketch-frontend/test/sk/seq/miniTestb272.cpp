#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb272.h"
namespace ANONYMOUS{

void sk(int N, bool* in/* len = N */, bool* _out/* len = N */) {
  CopyArr<bool >(_out,0, N);
  for (int  i=1;(i) < ((N - 0));i = i + 1){
    (_out[i]) = (in[i - 1]);
  }
  return;
}
void test(int N, bool* in/* len = N */, bool* _out/* len = N */) {
  CopyArr<bool >(_out,0, N);
  bool  tmp=(in[0]);
  for (int  i=1;(i) < (N);i = i + 1){
    (_out[i]) = tmp;
    bool  x=(in[i]);
    tmp = x;
  }
  return;
}

}
