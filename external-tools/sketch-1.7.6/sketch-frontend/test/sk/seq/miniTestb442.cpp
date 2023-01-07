#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb442.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  bool _tt0[4] = {0, 0, 0, 0};
  bool*  choices__ANONYMOUS_s2= new bool [4]; CopyArr<bool >(choices__ANONYMOUS_s2,_tt0, 4, 4);
  glblInit_choices__ANONYMOUS_s4(choices__ANONYMOUS_s2);
  _main(i, choices__ANONYMOUS_s2);
  delete[] choices__ANONYMOUS_s2;
}
void main__WrapperNospec(int i) {}
void glblInit_choices__ANONYMOUS_s4(bool* choices__ANONYMOUS_s3/* len = 4 */) {
  bool _tt1[4] = {0, 0, 0, 0};
  CopyArr<bool >(choices__ANONYMOUS_s3,_tt1, 4, 4);
}
void _main(int i, bool* choices__ANONYMOUS_s1/* len = 4 */) {
  if ((i) < ((i - 1))) {
    foo(choices__ANONYMOUS_s1);
  }
}
void foo(bool* choices__ANONYMOUS_s0/* len = 4 */) {}

}
