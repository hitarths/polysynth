#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb286.h"
namespace ANONYMOUS{

void test__Wrapper(int a, int b, int c) {
  test(a, b, c);
}
void test__WrapperNospec(int a, int b, int c) {}
void test(int a, int b, int c) {
  assert (((b + (((c - b) - (b + b)) + ((b - a) + (b + b))))) == (((b - a) + c)));;
}

}
