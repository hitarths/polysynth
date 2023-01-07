#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb284.h"
namespace ANONYMOUS{

void test__Wrapper() {
  test();
}
void test__WrapperNospec() {}
void main__Wrapper(int N, int* in/* len = N */) {
  _main(N, in);
}
void main__WrapperNospec(int N, int* in/* len = N */) {}
void test() {
  int _tt0[3] = {1, 2, 3};
  int*  q= new int [3]; CopyArr<int >(q,_tt0, 3, 3);
  _main(3, q);
  delete[] q;
}
void _main(int N, int* in/* len = N */) {
  if ((N) > (3)) {
    int*  b= new int [N / 2]; CopyArr<int >(b,in, N / 2, N);
    for (int  i=0;(i) < ((N / 2));i = i + 1){
      assert (((b[i])) == ((in[i])));;
    }
    delete[] b;
  }
}

}
