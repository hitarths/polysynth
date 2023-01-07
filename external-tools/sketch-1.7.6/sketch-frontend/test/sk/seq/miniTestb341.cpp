#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb341.h"
namespace ANONYMOUS{

void test__Wrapper(int N, int* x/* len = N */) {
  test(N, x);
}
void test__WrapperNospec(int N, int* x/* len = N */) {}
void test(int N, int* x_0/* len = N */) {
  int*  x= new int [N]; CopyArr<int >(x,x_0, N, N);
  if ((6) < (N)) {
    (x[6]) = 25;
    assert ((25) == ((x[6])));;
  }
}

}
