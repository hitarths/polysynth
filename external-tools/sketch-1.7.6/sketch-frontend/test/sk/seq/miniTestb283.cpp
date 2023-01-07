#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb283.h"
namespace ANONYMOUS{

void karatsuba(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */) {
  int*  out_s1= new int [2 * N]; CopyArr<int >(out_s1,0, 2 * N);
  mult(N, x, y, out_s1);
  int*  out_s3= new int [2 * N]; CopyArr<int >(out_s3,0, 2 * N);
  ident(2 * N, out_s1, out_s3);
  CopyArr<int >(_out,out_s3, 2 * N, 2 * N);
  delete[] out_s1;
  delete[] out_s3;
  return;
}
void mult(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */) {
  CopyArr<int >(_out,0, 2 * N);
  for (int  i=0;(i) < (N);i = i + 1){
    (_out[i]) = (x[i]);
    (_out[i + N]) = (y[i]);
  }
  return;
}
void ident(int N, int* in/* len = N */, int* _out/* len = N */) {
  CopyArr<int >(_out,in, N, N);
  return;
}

}
