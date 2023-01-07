#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb291.h"
namespace ANONYMOUS{

void test__Wrapper(int x) {
  test(x);
}
void test__WrapperNospec(int x) {}
void test(int x) {
  assert (((x + x)) == ((x + x)));;
}

}
