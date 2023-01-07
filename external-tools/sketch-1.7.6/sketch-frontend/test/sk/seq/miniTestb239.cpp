#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb239.h"
namespace ANONYMOUS{

void stenSK13(int N, float* in/* len = N * N */, int a, float* _out/* len = N * N */) {
  for (int  __sa0=0;(__sa0) < (N);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (N)));;
    CopyArr<float >((_out+ N * __sa0),0.0f, N);
  }
  for (int  __sa1=0;(__sa1) < (N);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (N)));;
    CopyArr<float >((_out+ N * __sa1),0.0f, N);
  }
  for (int  i=a;(i) < (N);i = i + 1){
    assert (((i) >= (0)) && ((i) < (N)));;
    assert (((a) >= (0)) && ((a) < (N)));;
    float  t=(in[(N * i) + a]);
    for (int  j=a;(j) < (N);j = j + 1){
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[(N * i) + j]) = t;
      if ((j) < ((N - 1))) {
        assert (((i) >= (0)) && ((i) < (N)));;
        assert ((((j + 1)) >= (0)) && (((j + 1)) < (N)));;
        t = (in[(N * i) + (j + 1)]);
      }
    }
  }
  return;
}
void sten13(int N, float* in/* len = N * N */, int a, float* _out/* len = N * N */) {
  for (int  __sa2=0;(__sa2) < (N);__sa2 = __sa2 + 1){
    assert (((__sa2) >= (0)) && ((__sa2) < (N)));;
    CopyArr<float >((_out+ N * __sa2),0.0f, N);
  }
  for (int  __sa3=0;(__sa3) < (N);__sa3 = __sa3 + 1){
    assert (((__sa3) >= (0)) && ((__sa3) < (N)));;
    CopyArr<float >((_out+ N * __sa3),0.0f, N);
  }
  for (int  i=a;(i) < (N);i = i + 1){
    for (int  j=a;(j) < (N);j = j + 1){
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[(N * i) + j]) = (in[(N * i) + j]);
    }
  }
  return;
}

}
