#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb399.h"
namespace ANONYMOUS{

void main__Wrapper(int t) {
  int  x__ANONYMOUS_s5=0;
  glblInit_x__ANONYMOUS_s8(x__ANONYMOUS_s5);
  _main(t, x__ANONYMOUS_s5);
}
void main__WrapperNospec(int t) {}
void glblInit_x__ANONYMOUS_s8(int& x__ANONYMOUS_s7) {
  x__ANONYMOUS_s7 = 0;
}
void _main(int t, int& x__ANONYMOUS_s6) {
  for (int  i=0;(i) < (t);i = i + 1){
    int  tt_s3=0;
    incr(tt_s3, x__ANONYMOUS_s6);
    assert ((tt_s3) == (i));;
  }
}
void incr(int& _out, int& x__ANONYMOUS_s4) {
  _out = x__ANONYMOUS_s4;
  x__ANONYMOUS_s4 = x__ANONYMOUS_s4 + 1;
  return;
}

}
