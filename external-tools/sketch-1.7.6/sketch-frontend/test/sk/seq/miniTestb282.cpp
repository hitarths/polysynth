#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb282.h"
namespace ANONYMOUS{

void test__Wrapper(int N, int* x/* len = N */) {
  test(N, x);
}
void test__WrapperNospec(int N, int* x/* len = N */) {}
void test(int N, int* x/* len = N */) {
  int*  out= new int [2 * N]; CopyArr<int >(out,0, 2 * N);
  if ((N) > (2)) {
    (out[2]) = (out[2]) + 3;
    assert (((out[2])) == (3));;
  }
}

}
