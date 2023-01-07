#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb256.h"
namespace ANONYMOUS{

void skMGinter(int N, bool* in/* len = N * N */, bool half, bool fourth, bool* _out/* len = (2 * N) * (2 * N) */) {
  for (int  __sa0=0;(__sa0) < ((2 * N));__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < ((2 * N))));;
    CopyArr<bool >((_out+ (2 * N) * __sa0),0, 2 * N);
  }
  for (int  __sa1=0;(__sa1) < ((2 * N));__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < ((2 * N))));;
    CopyArr<bool >((_out+ (2 * N) * __sa1),0, 2 * N);
  }
  for (int  j=0;(j) < (((N - 2) + 1));j = j + 1){
    for (int  i=0;(i) < (((N - 2) + 1));i = i + 1){
      assert ((((i * 2)) >= (0)) && (((i * 2)) < ((2 * N))));;
      assert ((((j * 2)) >= (0)) && (((j * 2)) < ((2 * N))));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[((2 * N) * (i * 2)) + (j * 2)]) = (in[(N * i) + j]);
      assert (((((i * 2) + 1)) >= (0)) && ((((i * 2) + 1)) < ((2 * N))));;
      assert ((((j * 2)) >= (0)) && (((j * 2)) < ((2 * N))));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[((2 * N) * ((i * 2) + 1)) + (j * 2)]) = half & (in[((N * i) + j)]);
      assert ((((i * 2)) >= (0)) && (((i * 2)) < ((2 * N))));;
      assert (((((j * 2) + 1)) >= (0)) && ((((j * 2) + 1)) < ((2 * N))));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[((2 * N) * (i * 2)) + ((j * 2) + 1)]) = half & (in[((N * i) + j)]);
      assert (((((i * 2) + 1)) >= (0)) && ((((i * 2) + 1)) < ((2 * N))));;
      assert (((((j * 2) + 1)) >= (0)) && ((((j * 2) + 1)) < ((2 * N))));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert ((((j + 1)) >= (0)) && (((j + 1)) < (N)));;
      assert ((((i + 1)) >= (0)) && (((i + 1)) < (N)));;
      assert ((((j + 1)) >= (0)) && (((j + 1)) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      (_out[((2 * N) * ((i * 2) + 1)) + ((j * 2) + 1)]) = fourth & (((in[((N * i) + (j + 1))]) ^ (in[((N * (i + 1)) + (j + 1))])) ^ (in[((N * i) + j)]));
    }
  }
  return;
}
void MGinter(int N, bool* in/* len = N * N */, bool half, bool fourth, bool* _out/* len = (2 * N) * (2 * N) */) {
  for (int  __sa2=0;(__sa2) < ((2 * N));__sa2 = __sa2 + 1){
    assert (((__sa2) >= (0)) && ((__sa2) < ((2 * N))));;
    CopyArr<bool >((_out+ (2 * N) * __sa2),0, 2 * N);
  }
  for (int  __sa3=0;(__sa3) < ((2 * N));__sa3 = __sa3 + 1){
    assert (((__sa3) >= (0)) && ((__sa3) < ((2 * N))));;
    CopyArr<bool >((_out+ (2 * N) * __sa3),0, 2 * N);
  }
  for (int  j=0;(j) < (((2 * N) - 2));j = j + 1){
    for (int  i=0;(i) < (((2 * N) - 2));i = i + 1){
      if ((((i % 2)) == (0)) && (((j % 2)) == (0))) {
        assert (((i) >= (0)) && ((i) < ((2 * N))));;
        assert (((j) >= (0)) && ((j) < ((2 * N))));;
        assert ((((i / 2)) >= (0)) && (((i / 2)) < (N)));;
        assert ((((j / 2)) >= (0)) && (((j / 2)) < (N)));;
        (_out[((2 * N) * i) + j]) = (in[(N * (i / 2)) + (j / 2)]);
      }
      if ((((i % 2)) == (1)) && (((j % 2)) == (0))) {
        assert (((i) >= (0)) && ((i) < ((2 * N))));;
        assert (((j) >= (0)) && ((j) < ((2 * N))));;
        assert ((((i / 2)) >= (0)) && (((i / 2)) < (N)));;
        assert ((((j / 2)) >= (0)) && (((j / 2)) < (N)));;
        (_out[((2 * N) * i) + j]) = half & (in[((N * (i / 2)) + (j / 2))]);
      }
      if ((((i % 2)) == (0)) && (((j % 2)) == (1))) {
        assert (((i) >= (0)) && ((i) < ((2 * N))));;
        assert (((j) >= (0)) && ((j) < ((2 * N))));;
        assert ((((i / 2)) >= (0)) && (((i / 2)) < (N)));;
        assert ((((j / 2)) >= (0)) && (((j / 2)) < (N)));;
        (_out[((2 * N) * i) + j]) = half & (in[((N * (i / 2)) + (j / 2))]);
      }
      if ((((i % 2)) == (1)) && (((j % 2)) == (1))) {
        assert (((i) >= (0)) && ((i) < ((2 * N))));;
        assert (((j) >= (0)) && ((j) < ((2 * N))));;
        assert ((((i / 2)) >= (0)) && (((i / 2)) < (N)));;
        assert ((((j / 2)) >= (0)) && (((j / 2)) < (N)));;
        assert (((((i / 2) + 1)) >= (0)) && ((((i / 2) + 1)) < (N)));;
        assert (((((j / 2) + 1)) >= (0)) && ((((j / 2) + 1)) < (N)));;
        assert ((((i / 2)) >= (0)) && (((i / 2)) < (N)));;
        assert (((((j / 2) + 1)) >= (0)) && ((((j / 2) + 1)) < (N)));;
        (_out[((2 * N) * i) + j]) = fourth & (((in[((N * (i / 2)) + (j / 2))]) ^ (in[((N * ((i / 2) + 1)) + ((j / 2) + 1))])) ^ (in[((N * (i / 2)) + ((j / 2) + 1))]));
      }
    }
  }
  return;
}

}
