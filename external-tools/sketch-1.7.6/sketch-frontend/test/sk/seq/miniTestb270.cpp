#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb270.h"
namespace ANONYMOUS{

void test__Wrapper(int i) {
  test(i);
}
void test__WrapperNospec(int i) {}
void test(int i) {
  assert (((((i + 1) + 1) % 3)) == (((i + 5) % 3)));;
}

}
