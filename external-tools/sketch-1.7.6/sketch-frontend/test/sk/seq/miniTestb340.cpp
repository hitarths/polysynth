#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb340.h"
namespace ANONYMOUS{

void test__Wrapper(int N, int* x/* len = N */) {
  test(N, x);
}
void test__WrapperNospec(int N, int* x/* len = N */) {}
void test(int N, int* x/* len = N */) {
  if ((3) < (N)) {
    int  t=N - 1;
    assert (((x[((t / 2) + (t / 2))])) == ((x[(2 * (t / 2))])));;
  }
}

}
