#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb266.h"
namespace ANONYMOUS{

void test__Wrapper(int N, int* a/* len = N */) {
  test(N, a);
}
void test__WrapperNospec(int N, int* a/* len = N */) {}
void test(int N, int* a/* len = N */) {
  int*  b= new int [N + 1]; CopyArr<int >(b,a, N + 1, N);
  assert (((b[N])) == (0));;
  delete[] b;
}

}
