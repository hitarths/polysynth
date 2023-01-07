#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb426.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y) {
  _main(x, y);
}
void main__WrapperNospec(int x, int y) {}
void _main(int x, int y) {
  int*  A= new int [y * x]; CopyArr<int >(A,0, y * x);
  for (int  __sa0=0;(__sa0) < (x);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (x)));;
    CopyArr<int >((A+ y * __sa0),0, y);
  }
  for (int  i=0;(i) < (x);i = i + 1){
    for (int  j=0;(j) < (y);j = j + 1){
      assert (((i) >= (0)) && ((i) < (x)));;
      assert (((j) >= (0)) && ((j) < (y)));;
      (A[(y * i) + j]) = i;
    }
  }
  assert (((x + 3)) >= (x));;
  int*  B= new int [(y + 3) * (x + 3)]; CopyArr<int >(B,0, (y + 3) * (x + 3));
  for (int  __sa1=0;(__sa1) < ((x + 3));__sa1 = __sa1 + 1){
    if ((__sa1) < (x)) {
      assert (((__sa1) >= (0)) && ((__sa1) < ((x + 3))));;
      assert (((__sa1) >= (0)) && ((__sa1) < (x)));;
      CopyArr<int >((B+ (y + 3) * __sa1),(A+ y * __sa1), y + 3, y);
    } else {
      assert (((__sa1) >= (0)) && ((__sa1) < ((x + 3))));;
      CopyArr<int >((B+ (y + 3) * __sa1),0, y + 3);
    }
  }
  for (int  i_0=0;(i_0) < (x);i_0 = i_0 + 1){
    int  j_0=0;
    for (j_0 = 0;(j_0) < (y);j_0 = j_0 + 1){
      assert (((i_0) >= (0)) && ((i_0) < ((x + 3))));;
      assert (((j_0) >= (0)) && ((j_0) < ((y + 3))));;
      assert (((i_0) >= (0)) && ((i_0) < (x)));;
      assert (((j_0) >= (0)) && ((j_0) < (y)));;
      assert (((B[(((y + 3) * i_0) + j_0)])) == ((A[((y * i_0) + j_0)])));;
    }
    while ((j_0) < ((y + 3))) {
      assert (((i_0) >= (0)) && ((i_0) < ((x + 3))));;
      assert (((j_0) >= (0)) && ((j_0) < ((y + 3))));;
      assert (((B[(((y + 3) * i_0) + j_0)])) == (0));;
      j_0 = j_0 + 1;
    }
  }
  delete[] A;
  delete[] B;
}

}
