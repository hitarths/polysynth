#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb312.h"
namespace ANONYMOUS{

void testSK7(int N, int* in/* len = N * N */, int* _out/* len = N * N */) {
  for (int  __sa0=0;(__sa0) < (N);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (N)));;
    CopyArr<int >((_out+ N * __sa0),0, N);
  }
  for (int  __sa1=0;(__sa1) < (N);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (N)));;
    CopyArr<int >((_out+ N * __sa1),0, N);
  }
  for (int  i=1;(i) < ((N - 1));i = i + 1){
    for (int  j=1;(j) < ((N - 1));j = j + 1){
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert ((((i + 1)) >= (0)) && (((i + 1)) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert ((((j + 1)) >= (0)) && (((j + 1)) < (N)));;
      (_out[(N * i) + j]) = (in[((N * (i + 1)) + j)]) + (in[((N * i) + (j + 1))]);
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert ((((i - 1)) >= (0)) && (((i - 1)) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert ((((j - 1)) >= (0)) && (((j - 1)) < (N)));;
      (_out[(N * i) + j]) = (_out[((N * i) + j)]) + ((in[((N * (i - 1)) + j)]) + (in[((N * i) + (j - 1))]));
    }
  }
  return;
}
void test7(int N, int* in/* len = N * N */, int* _out/* len = N * N */) {
  for (int  __sa2=0;(__sa2) < (N);__sa2 = __sa2 + 1){
    assert (((__sa2) >= (0)) && ((__sa2) < (N)));;
    CopyArr<int >((_out+ N * __sa2),0, N);
  }
  for (int  i=0;(i) < (N);i = i + 1){
    for (int  j=0;(j) < (N);j = j + 1){
      if (((((i) > (0)) && ((i) < ((N - 1)))) && ((j) > (0))) && ((j) < ((N - 1)))) {
        assert (((i) >= (0)) && ((i) < (N)));;
        assert (((j) >= (0)) && ((j) < (N)));;
        assert ((((i - 1)) >= (0)) && (((i - 1)) < (N)));;
        assert (((j) >= (0)) && ((j) < (N)));;
        assert ((((i + 1)) >= (0)) && (((i + 1)) < (N)));;
        assert (((j) >= (0)) && ((j) < (N)));;
        assert (((i) >= (0)) && ((i) < (N)));;
        assert ((((j - 1)) >= (0)) && (((j - 1)) < (N)));;
        assert (((i) >= (0)) && ((i) < (N)));;
        assert ((((j + 1)) >= (0)) && (((j + 1)) < (N)));;
        (_out[(N * i) + j]) = (((in[((N * (i - 1)) + j)]) + (in[((N * (i + 1)) + j)])) + (in[((N * i) + (j - 1))])) + (in[((N * i) + (j + 1))]);
      } else {
        assert (((i) >= (0)) && ((i) < (N)));;
        assert (((j) >= (0)) && ((j) < (N)));;
        (_out[(N * i) + j]) = 0;
      }
    }
  }
  return;
}

}
