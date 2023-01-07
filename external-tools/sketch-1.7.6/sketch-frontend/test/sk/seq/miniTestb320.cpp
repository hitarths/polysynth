#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb320.h"
namespace ANONYMOUS{

void cacheObv1dSK(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */) {
  for (int  __sa0=0;(__sa0) < (T);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (T)));;
    CopyArr<float >((_out+ N * __sa0),0.0f, N);
  }
  for (int  __sa1=0;(__sa1) < (T);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (T)));;
    CopyArr<float >((_out+ N * __sa1),0.0f, N);
  }
  forLoop_t11(0, T, T, N, in, f, _out);
  return;
}
void cacheObv1d(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */) {
  for (int  __sa2=0;(__sa2) < (T);__sa2 = __sa2 + 1){
    assert (((__sa2) >= (0)) && ((__sa2) < (T)));;
    CopyArr<float >((_out+ N * __sa2),0.0f, N);
  }
  for (int  __sa3=0;(__sa3) < (T);__sa3 = __sa3 + 1){
    assert (((__sa3) >= (0)) && ((__sa3) < (T)));;
    CopyArr<float >((_out+ N * __sa3),0.0f, N);
  }
  for (int  i=0;(i) < (T);i = i + 1){
    for (int  j=0;(j) < (N);j = j + 1){
      assert (((i) >= (0)) && ((i) < (T)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (T)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[(N * i) + j]) = (in[j]) + (f[((N * i) + j)]);
    }
  }
  return;
}
void test__Wrapper(int N) {
  test(N);
}
void test__WrapperNospec(int N) {}
void forLoop_t11(int low, int high, int T2, int N1, float* in3_0/* len = N1 */, float* f4_1/* len = N1 * T2 */, float* out0/* len = N1 * T2 */) {
  if ((low) < (high)) {
    forLoop_t22(0, N1, T2, low, N1, in3_0, f4_1, out0);
    forLoop_t11(low + 1, high, T2, N1, in3_0, f4_1, out0);
  }
}
void test(int N) {
  int  out=0;
  forLoop_t13(0, N, N, out);
  assert ((out) == ((N * N)));;
}
void forLoop_t22(int low, int high, int T2, int i5, int N1, float* in3_0/* len = N1 */, float* f4_1/* len = N1 * T2 */, float* out0/* len = N1 * T2 */) {
  if ((low) < (high)) {
    assert (((i5) >= (0)) && ((i5) < (T2)));;
    assert (((low) >= (0)) && ((low) < (N1)));;
    assert (((i5) >= (0)) && ((i5) < (T2)));;
    assert (((low) >= (0)) && ((low) < (N1)));;
    (out0[(N1 * i5) + low]) = (in3_0[low]) + (f4_1[((N1 * i5) + low)]);
    forLoop_t22(low + 1, high, T2, i5, N1, in3_0, f4_1, out0);
  }
}
void forLoop_t13(int low, int high, int N7, int& out6) {
  if ((low) < (high)) {
    forLoop_t24(0, N7, out6);
    forLoop_t13(low + 1, high, N7, out6);
  }
}
void forLoop_t24(int low, int high, int& out6) {
  if ((low) < (high)) {
    out6 = out6 + 1;
    forLoop_t24(low + 1, high, out6);
  }
}

}
