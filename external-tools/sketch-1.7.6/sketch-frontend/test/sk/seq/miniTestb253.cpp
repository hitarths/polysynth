#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb253.h"
namespace ANONYMOUS{

void testSK0(int N, int* in_0/* len = N */, int* _out/* len = N */) {
  int*  in= new int [N]; CopyArr<int >(in,in_0, N, N);
  for (int  i=0;(i) < ((N - 1));i = i + 1){
    (in[i]) = (in[i]) + (in[(i + 1)]);
  }
  CopyArr<int >(_out,in, N, N);
  delete[] in;
  return;
}
void test0(int N, int* in_0/* len = N */, int* _out/* len = N */) {
  int*  in= new int [N]; CopyArr<int >(in,in_0, N, N);
  for (int  i=0;(i) < ((N - 1));i = i + 1){
    (in[i]) = (in[i]) + (in[(i + 1)]);
  }
  CopyArr<int >(_out,in, N, N);
  delete[] in;
  return;
}

}
