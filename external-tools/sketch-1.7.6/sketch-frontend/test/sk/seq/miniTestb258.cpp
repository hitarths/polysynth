#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb258.h"
namespace ANONYMOUS{

void testSK4(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  int*  t0= new int [N + 1]; CopyArr<int >(t0,0, N + 1);
  if ((N) > (0)) {
    (t0[1]) = (in[0]);
    int*  t1= new int [N + 1]; CopyArr<int >(t1,0, N + 1);
    if ((N) > (1)) {
      (t1[1]) = (in[1]);
      (_out[0]) = 0;
      (_out[N - 1]) = 0;
      int*  t2= new int [N + 1]; CopyArr<int >(t2,0, N + 1);
      for (int  i=1;(i) < ((N - 1));i = i + 1){
        (t2[i]) = (in[i + 1]);
        (_out[i]) = (t0[i]) + (t2[i]);
        (t0[i + 1]) = (t1[i]);
        (t1[i + 1]) = (t2[i]);
      }
      delete[] t2;
    }
  }
  delete[] t0;
  return;
}
void test4(int N, int* in/* len = N */, int* _out/* len = N */) {
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
