#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb342.h"
namespace ANONYMOUS{

void test__Wrapper(int* x/* len = 4 */) {
  test(x);
}
void test__WrapperNospec(int* x/* len = 4 */) {}
void test(int* x_0/* len = 4 */) {
  int*  x= new int [4]; CopyArr<int >(x,x_0, 4, 4);
  foo(4, x);
  assert (((x[2])) == (25));;
  delete[] x;
}
void foo(int N, int* x/* len = N */) {
  if ((3) < (N)) {
    (x[2]) = 25;
    assert ((25) == ((x[2])));;
  }
}

}
