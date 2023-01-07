#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb275.h"
namespace ANONYMOUS{

void test2__Wrapper(int i) {
  test2(i);
}
void test2__WrapperNospec(int i) {}
void test__Wrapper() {
  test();
}
void test__WrapperNospec() {}
void test2(int i) {
  if ((i) > (3)) {
    return;
  }
  foo2(i);
}
void test() {
  return;
}
void foo2(int i) {
  assert ((i) <= (3));;
}

}
