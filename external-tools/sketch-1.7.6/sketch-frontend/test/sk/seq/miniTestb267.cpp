#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb267.h"
namespace ANONYMOUS{

void testSK0(int N, float* a/* len = N * N */, float* _out/* len = N * N */) {
  for (int  __sa6=0;(__sa6) < (N);__sa6 = __sa6 + 1){
    assert (((__sa6) >= (0)) && ((__sa6) < (N)));;
    CopyArr<float >((_out+ N * __sa6),0.0f, N);
  }
  for (int  __sa7=0;(__sa7) < (N);__sa7 = __sa7 + 1){
    assert (((__sa7) >= (0)) && ((__sa7) < (N)));;
    CopyArr<float >((_out+ N * __sa7),0.0f, N);
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
  for (int  __sa8=0;(__sa8) < (N);__sa8 = __sa8 + 1){
    assert (((__sa8) >= (0)) && ((__sa8) < (N)));;
    CopyArr<float >((_out+ N * __sa8),0.0f, N);
  }
  for (int  __sa9=0;(__sa9) < (N);__sa9 = __sa9 + 1){
    assert (((__sa9) >= (0)) && ((__sa9) < (N)));;
    CopyArr<float >((_out+ N * __sa9),0.0f, N);
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
