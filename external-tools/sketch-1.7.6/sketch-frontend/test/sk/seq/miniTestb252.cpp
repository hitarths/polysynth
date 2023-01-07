#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb252.h"
namespace ANONYMOUS{

void testSK0(int N, float* a/* len = N * N */, float* _out/* len = N * N */) {
  for (int  __sa18=0;(__sa18) < (N);__sa18 = __sa18 + 1){
    assert (((__sa18) >= (0)) && ((__sa18) < (N)));;
    CopyArr<float >((_out+ N * __sa18),0.0f, N);
  }
  for (int  __sa19=0;(__sa19) < (N);__sa19 = __sa19 + 1){
    assert (((__sa19) >= (0)) && ((__sa19) < (N)));;
    CopyArr<float >((_out+ N * __sa19),0.0f, N);
  }
  for (int  i=1 - N;(i) < (N);i = i + 1){
    for (int  j=i - i;(j) < ((1 + i));j = j + 1){
      assert (((i) < (N)) && ((i) >= (0)));;
      assert (((j) < (N)) && ((j) >= (0)));;
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
  for (int  __sa20=0;(__sa20) < (N);__sa20 = __sa20 + 1){
    assert (((__sa20) >= (0)) && ((__sa20) < (N)));;
    CopyArr<float >((_out+ N * __sa20),0.0f, N);
  }
  for (int  __sa21=0;(__sa21) < (N);__sa21 = __sa21 + 1){
    assert (((__sa21) >= (0)) && ((__sa21) < (N)));;
    CopyArr<float >((_out+ N * __sa21),0.0f, N);
  }
  for (int  i=0;(i) < (N);i = i + 1){
    for (int  j=0;(j) < ((i + 1));j = j + 1){
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
