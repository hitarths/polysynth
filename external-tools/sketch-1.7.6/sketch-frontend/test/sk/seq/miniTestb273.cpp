#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb273.h"
namespace ANONYMOUS{

void tiledTranspose(int N, int P, bool* input/* len = N * N */, bool* _out/* len = N * N */) {
  for (int  __sa2=0;(__sa2) < (N);__sa2 = __sa2 + 1){
    assert (((__sa2) >= (0)) && ((__sa2) < (N)));;
    CopyArr<bool >((_out+ N * __sa2),0, N);
  }
  if ((((N) < (1)) || ((P) < (1))) || (((N % P)) != (0))) {
    for (int  __sa3=0;(__sa3) < (N);__sa3 = __sa3 + 1){
      assert (((__sa3) >= (0)) && ((__sa3) < (N)));;
      CopyArr<bool >((_out+ N * __sa3),0, N);
    }
    return;
  }
  bool*  output= new bool [N * N]; CopyArr<bool >(output,0, N * N);
  for (int  __sa4=0;(__sa4) < (N);__sa4 = __sa4 + 1){
    assert (((__sa4) >= (0)) && ((__sa4) < (N)));;
    CopyArr<bool >((output+ N * __sa4),0, N);
  }
  for (int  p=0;(p) < (P);p = p + 1){
    for (int  i=(N / P) * p;(i) < (((N / P) * (p + 1)));i = i + 1){
      for (int  j=0;(j) < (N);j = j + 1){
        assert (((i) >= (0)) && ((i) < (N)));;
        assert (((j) >= (0)) && ((j) < (N)));;
        assert (((j) >= (0)) && ((j) < (N)));;
        assert (((i) >= (0)) && ((i) < (N)));;
        (output[(N * i) + j]) = (input[(N * j) + i]);
      }
    }
  }
  CopyArr<bool >(_out,output, N * N, N * N);
  delete[] output;
  return;
}
void transpose(int N, int P, bool* input/* len = N * N */, bool* _out/* len = N * N */) {
  for (int  __sa5=0;(__sa5) < (N);__sa5 = __sa5 + 1){
    assert (((__sa5) >= (0)) && ((__sa5) < (N)));;
    CopyArr<bool >((_out+ N * __sa5),0, N);
  }
  if ((((N) < (1)) || ((P) < (1))) || (((N % P)) != (0))) {
    for (int  __sa6=0;(__sa6) < (N);__sa6 = __sa6 + 1){
      assert (((__sa6) >= (0)) && ((__sa6) < (N)));;
      CopyArr<bool >((_out+ N * __sa6),0, N);
    }
    return;
  }
  bool*  output= new bool [N * N]; CopyArr<bool >(output,0, N * N);
  for (int  __sa7=0;(__sa7) < (N);__sa7 = __sa7 + 1){
    assert (((__sa7) >= (0)) && ((__sa7) < (N)));;
    CopyArr<bool >((output+ N * __sa7),0, N);
  }
  for (int  i=0;(i) < (N);i = i + 1){
    for (int  j=0;(j) < (N);j = j + 1){
      assert (((i) >= (0)) && ((i) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((j) >= (0)) && ((j) < (N)));;
      assert (((i) >= (0)) && ((i) < (N)));;
      (output[(N * i) + j]) = (input[(N * j) + i]);
    }
  }
  CopyArr<bool >(_out,output, N * N, N * N);
  delete[] output;
  return;
}

}
