#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb289.h"
namespace ANONYMOUS{

void test__Wrapper(int a, int b, int c) {
  test(a, b, c);
}
void test__WrapperNospec(int a, int b, int c) {}
void test(int a, int b, int c) {
  assert ((c) == (c));;
  assert ((c) == (c));;
}

}
