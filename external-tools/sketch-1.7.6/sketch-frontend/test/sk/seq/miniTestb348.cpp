#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb348.h"
namespace ANONYMOUS{

void main__Wrapper(int N, int M, int* x/* len = N * M */) {
  _main(N, M, x);
}
void main__WrapperNospec(int N, int M, int* x/* len = N * M */) {}
void _main(int N, int M, int* x/* len = N * M */) {
  int*  rv_s28= new int [N * N]; CopyArr<int >(rv_s28,0, N * N);
  square(N, M, x, rv_s28);
  delete[] rv_s28;
}
void square(int N, int M, int* x/* len = N * M */, int* _out/* len = N * N */) {
  for (int  __sa29=0;(__sa29) < (N);__sa29 = __sa29 + 1){
    assert (((__sa29) >= (0)) && ((__sa29) < (N)));;
    CopyArr<int >((_out+ N * __sa29),0, N);
  }
  bool  __sa0=(0) < (N);
  int*  xx= new int [M * N]; CopyArr<int >(xx,0, M * N);
  int  i=0;
  while (__sa0) {
    bool  __sa1=(0) < (M);
    int  j=0;
    while (__sa1) {
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (M)));;
      assert (((j) >= (0)) && ((j) < (M)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      (xx[(M * i) + j]) = (x[(N * j) + i]);
      j = j + 1;
      __sa1 = (j) < (M);
    }
    i = i + 1;
    __sa0 = (i) < (N);
  }
  bool  __sa2=(0) < (N);
  int  i_0=0;
  while (__sa2) {
    bool  __sa3=(0) < (M);
    int  j_0=0;
    while (__sa3) {
      bool  __sa4=(0) < (N);
      int  k=0;
      while (__sa4) {
        assert (((k) >= (0)) && ((k) < (N)));;
        assert (((k) >= (0)) && ((k) < (N)));;
        assert (((k) >= (0)) && ((k) < (N)));;
        assert (((k) >= (0)) && ((k) < (N)));;
        assert (((k) >= (0)) && ((k) < (N)));;
        assert (((i_0) >= (0)) && ((i_0) < (M)));;
        assert (((i_0) >= (0)) && ((i_0) < (M)));;
        assert (((k) >= (0)) && ((k) < (N)));;
        (_out[(N * k) + k]) = (_out[((N * k) + k)]) + ((xx[((M * k) + i_0)]) * (x[((N * i_0) + k)]));
        k = k + 1;
        __sa4 = (k) < (N);
      }
      j_0 = j_0 + 1;
      __sa3 = (j_0) < (N);
    }
    i_0 = i_0 + 1;
    __sa2 = (i_0) < (M);
  }
  delete[] xx;
  return;
}

}
