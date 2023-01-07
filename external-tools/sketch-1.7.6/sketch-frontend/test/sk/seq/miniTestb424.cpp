#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb424.h"
namespace ANONYMOUS{

void main__Wrapper(int r, int c) {
  _main(r, c);
}
void main__WrapperNospec(int r, int c) {}
void _main(int r, int c) {
  bool  __sa0=(0) < (c);
  int*  A= new int [c * r]; CopyArr<int >(A,0, c * r);
  int  i=0;
  while (__sa0) {
    bool  __sa1=(0) < (r);
    int  j=0;
    while (__sa1) {
      if (((((((i * j) - 5) + r) + c) % 2)) == (0)) {
        assert (((i) >= (0)) && ((i) < (r)));;
        assert (((j) >= (0)) && ((j) < (c)));;
        (A[(c * i) + j]) = 10;
      } else {
        assert (((i) >= (0)) && ((i) < (r)));;
        assert (((j) >= (0)) && ((j) < (c)));;
        (A[(c * i) + j]) = 5;
      }
      j = j + 1;
      __sa1 = (j) < (c);
    }
    i = i + 1;
    __sa0 = (i) < (r);
  }
}

}
