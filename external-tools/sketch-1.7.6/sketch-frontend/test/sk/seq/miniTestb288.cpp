#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb288.h"
namespace ANONYMOUS{

void test__Wrapper(int a, int b, int c) {
  test(a, b, c);
}
void test__WrapperNospec(int a, int b, int c) {}
void test(int a, int b, int c) {
  assert (((((2 * a) + b) + (5 * c))) == ((((a + a) + b) + (5 * c))));;
  assert ((((3 * a) + b)) == ((((a + a) + b) + a)));;
}

}
