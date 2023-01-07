#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb250.h"
namespace ANONYMOUS{

void testSK0(int N, float* a/* len = N * N */, float* _out/* len = N * N */) {
  for (int  __sa0=0;(__sa0) < (N);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (N)));;
    CopyArr<float >((_out+ N * __sa0),0.0f, N);
  }
  for (int  __sa1=0;(__sa1) < (N);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (N)));;
    CopyArr<float >((_out+ N * __sa1),0.0f, N);
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
void test0(int N, float* a/* len = N * N */, float* _out/* len = N * N */) {
  for (int  __sa2=0;(__sa2) < (N);__sa2 = __sa2 + 1){
    assert (((__sa2) >= (0)) && ((__sa2) < (N)));;
    CopyArr<float >((_out+ N * __sa2),0.0f, N);
  }
  for (int  __sa3=0;(__sa3) < (N);__sa3 = __sa3 + 1){
    assert (((__sa3) >= (0)) && ((__sa3) < (N)));;
    CopyArr<float >((_out+ N * __sa3),0.0f, N);
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
