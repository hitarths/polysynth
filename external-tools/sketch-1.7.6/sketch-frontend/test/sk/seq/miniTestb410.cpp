#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb410.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  bool  papa__ANONYMOUS_s2=0;
  glblInit_papa__ANONYMOUS_s4(papa__ANONYMOUS_s2);
  _main(i, papa__ANONYMOUS_s2);
}
void main__WrapperNospec(int i) {}
void glblInit_papa__ANONYMOUS_s4(bool& papa__ANONYMOUS_s3) {
  papa__ANONYMOUS_s3 = 1;
}
void _main(int i, bool& papa__ANONYMOUS_s0) {
  papa__ANONYMOUS_s0 = 0;
  print(0);
}
void print(int i) {assert(i==0);}

}
