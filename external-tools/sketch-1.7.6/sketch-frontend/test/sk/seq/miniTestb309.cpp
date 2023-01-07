#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb309.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int _tt0[3] = {1, 2, 3};
  int*  aa= new int [3]; CopyArr<int >(aa,_tt0, 3, 3);
  foo(3, aa);
  foo(3, aa);
  assert (((aa[0])) == (1));;
  delete[] aa;
}
void foo(int N, int* bar/* len = N */) {
  assert (((bar[1])) == (2));;
}

}
