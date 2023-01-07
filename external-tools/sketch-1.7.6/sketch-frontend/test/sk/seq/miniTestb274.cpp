#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb274.h"
namespace ANONYMOUS{

void sk(int N, int M, bool* in/* len = N * M */, bool* _out/* len = N * M */) {
  for (int  __sa4=0;(__sa4) < (M);__sa4 = __sa4 + 1){
    assert (((__sa4) >= (0)) && ((__sa4) < (M)));;
    CopyArr<bool >((_out+ N * __sa4),0, N);
  }
  if ((M) > (1)) {
    for (int  i=0;(i) < (N);i = i + 1){
      if ((i) == (0)) {
        assert ((1) < (M));;
        assert ((0) < (N));;
        assert ((0) < (M));;
        assert ((0) < (N));;
        (_out[N]) = (in[0]);
      } else {
        assert ((1) < (M));;
        assert (((i) >= (0)) && ((i) < (N)));;
        assert ((((M - 1)) >= (0)) && (((M - 1)) < (M)));;
        assert ((((i - 1)) >= (0)) && (((i - 1)) < (N)));;
        (_out[N + i]) = (in[(N * (M - 1)) + (i - 1)]);
      }
      for (int  j=2;(j) < (M);j = j + 1){
        assert (((j) >= (0)) && ((j) < (M)));;
        assert (((i) >= (0)) && ((i) < (N)));;
        assert ((((j - 1)) >= (0)) && (((j - 1)) < (M)));;
        assert (((((i - 1) + 1)) >= (0)) && ((((i - 1) + 1)) < (N)));;
        (_out[(N * j) + i]) = (in[(N * (j - 1)) + ((i - 1) + 1)]);
      }
    }
  }
  return;
}
void test(int N, int M, bool* in/* len = N * M */, bool* _out/* len = N * M */) {
  for (int  __sa5=0;(__sa5) < (M);__sa5 = __sa5 + 1){
    assert (((__sa5) >= (0)) && ((__sa5) < (M)));;
    CopyArr<bool >((_out+ N * __sa5),0, N);
  }
  if ((M) > (1)) {
    assert ((0) < (M));;
    assert ((0) < (N));;
    bool  tmp=(in[0]);
    for (int  i=0;(i) < (N);i = i + 1){
      for (int  j=1;(j) < (M);j = j + 1){
        assert (((j) >= (0)) && ((j) < (M)));;
        assert (((i) >= (0)) && ((i) < (N)));;
        (_out[(N * j) + i]) = tmp;
        assert (((j) >= (0)) && ((j) < (M)));;
        assert (((i) >= (0)) && ((i) < (N)));;
        tmp = (in[(N * j) + i]);
      }
    }
  }
  return;
}

}
