#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb251.h"
namespace ANONYMOUS{

void testSK0(int N, float* a/* len = N * N */, float* _out/* len = N * N */) {
  for (int  __sa10=0;(__sa10) < (N);__sa10 = __sa10 + 1){
    assert (((__sa10) >= (0)) && ((__sa10) < (N)));;
    CopyArr<float >((_out+ N * __sa10),0.0f, N);
  }
  for (int  __sa11=0;(__sa11) < (N);__sa11 = __sa11 + 1){
    assert (((__sa11) >= (0)) && ((__sa11) < (N)));;
    CopyArr<float >((_out+ N * __sa11),0.0f, N);
  }
  for (int  i=0;(i) < (N);i = i + 1){
    for (int  j=0;(j) < (i);j = j + 1){
      assert (((i) < (N)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[(N * i) + j]) = (a[(N * i) + j]);
    }
  }
  return;
}
void test0(int N, float* a/* len = N * N */, float* _out/* len = N * N */) {
  for (int  __sa12=0;(__sa12) < (N);__sa12 = __sa12 + 1){
    assert (((__sa12) >= (0)) && ((__sa12) < (N)));;
    CopyArr<float >((_out+ N * __sa12),0.0f, N);
  }
  for (int  __sa13=0;(__sa13) < (N);__sa13 = __sa13 + 1){
    assert (((__sa13) >= (0)) && ((__sa13) < (N)));;
    CopyArr<float >((_out+ N * __sa13),0.0f, N);
  }
  for (int  i=0;(i) < (N);i = i + 1){
    for (int  j=0;(j) < (i);j = j + 1){
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[(N * i) + j]) = (a[(N * i) + j]);
    }
  }
  return;
}

}
