#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb346.h"
namespace ANONYMOUS{

void testSK1(int N, int* in_0/* len = N */, int* _out/* len = N */) {
  int*  in= new int [N]; CopyArr<int >(in,in_0, N, N);
  if ((N) > (5)) {
    (in[5]) = 11;
  }
  CopyArr<int >(_out,in, N, N);
  delete[] in;
  return;
}
void test1(int N, int* in_0/* len = N */, int* _out/* len = N */) {
  int*  in= new int [N]; CopyArr<int >(in,in_0, N, N);
  if ((N) > (5)) {
    (in[5]) = 11;
  }
  CopyArr<int >(_out,in, N, N);
  delete[] in;
  return;
}

}
