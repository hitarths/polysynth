#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb240.h"
namespace ANONYMOUS{

void stenSK14(int N, int a, float* in/* len = N * N */, float* _out/* len = N * N */) {
  for (int  __sa0=0;(__sa0) < (N);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (N)));;
    CopyArr<float >((_out+ N * __sa0),0.0f, N);
  }
  for (int  __sa1=0;(__sa1) < (N);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (N)));;
    CopyArr<float >((_out+ N * __sa1),0.0f, N);
  }
  float*  t= new float [(N + 1) * (N + 1)]; CopyArr<float >(t,0.0f, (N + 1) * (N + 1));
  for (int  i=a;(i) < (N);i = i + 1){
    assert (((i) >= (0)) && ((i) < ((N + 1))));;
    assert (((a) >= (0)) && ((a) < ((N + 1))));;
    assert (((i) >= (0)) && ((i) < (N)));;
    assert (((a) >= (0)) && ((a) < (N)));;
    (t[((N + 1) * i) + a]) = (in[(N * i) + a]);
    for (int  j=a;(j) < (N);j = j + 1){
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < ((N + 1))));;
      assert (((j) >= (0)) && ((j) < ((N + 1))));;
      (_out[(N * i) + j]) = (t[((N + 1) * i) + j]);
      if ((j) < ((N - 1))) {
        assert (((i) >= (0)) && ((i) < ((N + 1))));;
        assert ((((j + 1)) >= (0)) && (((j + 1)) < ((N + 1))));;
        assert (((i) >= (0)) && ((i) < (N)));;
        assert ((((j + 1)) >= (0)) && (((j + 1)) < (N)));;
        (t[((N + 1) * i) + (j + 1)]) = (in[(N * i) + (j + 1)]);
      }
    }
  }
  delete[] t;
  return;
}
void sten14(int N, int a, float* in/* len = N * N */, float* _out/* len = N * N */) {
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
