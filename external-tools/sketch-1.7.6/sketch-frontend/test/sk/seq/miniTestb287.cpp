#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb287.h"
namespace ANONYMOUS{

void test__Wrapper(int a, int b, int c) {
  test(a, b, c);
}
void test__WrapperNospec(int a, int b, int c) {}
void test(int a, int b, int c) {
  assert ((((b - c) + (c - a))) == ((b - a)));;
}

}
