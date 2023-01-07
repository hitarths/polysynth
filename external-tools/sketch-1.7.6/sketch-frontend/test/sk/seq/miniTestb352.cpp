#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb352.h"
namespace ANONYMOUS{

void main__Wrapper() {
  int  z__ANONYMOUS_s6=0;
  glblInit_z__ANONYMOUS_s12(z__ANONYMOUS_s6);
  int  y__ANONYMOUS_s5=0;
  glblInit_y__ANONYMOUS_s10(y__ANONYMOUS_s5);
  int  x__ANONYMOUS_s4=0;
  glblInit_x__ANONYMOUS_s8(x__ANONYMOUS_s4);
  _main(x__ANONYMOUS_s4, y__ANONYMOUS_s5, z__ANONYMOUS_s6);
}
void main__WrapperNospec() {}
void glblInit_x__ANONYMOUS_s8(int& x__ANONYMOUS_s7) {
  x__ANONYMOUS_s7 = 0;
}
void glblInit_y__ANONYMOUS_s10(int& y__ANONYMOUS_s9) {
  y__ANONYMOUS_s9 = 0;
}
void glblInit_z__ANONYMOUS_s12(int& z__ANONYMOUS_s11) {
  z__ANONYMOUS_s11 = 0;
}
void _main(int& x__ANONYMOUS_s1, int& y__ANONYMOUS_s2, int& z__ANONYMOUS_s3) {
  x__ANONYMOUS_s1 = 25;
  y__ANONYMOUS_s2 = 12;
  mod(z__ANONYMOUS_s3);
  assert ((z__ANONYMOUS_s3) == (10));;
  int  z0=10;
  foo(z0, y__ANONYMOUS_s2);
  assert ((y__ANONYMOUS_s2) == (12));;
}
void mod(int& t) {
  t = 10;
}
void foo(int& y, int& y__ANONYMOUS_s0) {
  y = 22;
  return;
}

}
