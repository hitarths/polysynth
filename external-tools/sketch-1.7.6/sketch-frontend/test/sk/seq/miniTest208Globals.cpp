#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest208Globals.h"
namespace ANONYMOUS{

void main__Wrapper() {
  int  G__ANONYMOUS_s1=0;
  glblInit_G__ANONYMOUS_s4(G__ANONYMOUS_s1);
  _main(G__ANONYMOUS_s1);
}
void main__WrapperNospec() {}
void glblInit_G__ANONYMOUS_s4(int& G__ANONYMOUS_s3) {
  G__ANONYMOUS_s3 = 4;
}
void _main(int& G__ANONYMOUS_s2) {
  bool _tt0[5] = {0, 0, 0, 0, 0};
  int*  tmp= new int [5]; CopyArr<int >(tmp,_tt0, 5, 5);
  fcn(tmp, 4, G__ANONYMOUS_s2);
  fcn(tmp, 8, G__ANONYMOUS_s2);
  delete[] tmp;
}
void fcn(int* arr1/* len = 5 */, int x, int& G__ANONYMOUS_s0) {
  assert ((x) == (G__ANONYMOUS_s0));;
  G__ANONYMOUS_s0 = x + 4;
}

}
