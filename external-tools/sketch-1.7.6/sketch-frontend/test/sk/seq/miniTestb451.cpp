#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb451.h"
namespace ANONYMOUS{

void main__Wrapper() {
  int  x__ANONYMOUS_s2=0;
  glblInit_x__ANONYMOUS_s5(x__ANONYMOUS_s2);
  _main(x__ANONYMOUS_s2);
}
void main__WrapperNospec() {}
void glblInit_x__ANONYMOUS_s5(int& x__ANONYMOUS_s4) {
  x__ANONYMOUS_s4 = 0;
}
void _main(int& x__ANONYMOUS_s1) {
  dostuff_foo1(x__ANONYMOUS_s1);
  assert ((x__ANONYMOUS_s1) == (3));;
}
void dostuff_foo1(int& x__ANONYMOUS_s3) {
  foo1(x__ANONYMOUS_s3);
  foo1(x__ANONYMOUS_s3);
  foo1(x__ANONYMOUS_s3);
}
void foo1(int& x__ANONYMOUS_s0) {
  x__ANONYMOUS_s0 = x__ANONYMOUS_s0 + 1;
}

}
