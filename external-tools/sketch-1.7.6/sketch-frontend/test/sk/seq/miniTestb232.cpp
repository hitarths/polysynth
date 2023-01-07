#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb232.h"
namespace ANONYMOUS{

void main__Wrapper(int* x/* len = 5 */) {
  _main(x);
}
void main__WrapperNospec(int* x/* len = 5 */) {}
void _main(int* x_0/* len = 5 */) {
  int*  x= new int [5]; CopyArr<int >(x,x_0, 5, 5);
  int  t=0;
  helper(x, t);
  assert (((x[t])) < (5));;
  delete[] x;
}
void helper(int* x/* len = 5 */, int& t) {
  if ((t) < (0)) {
    return;
  }
  t = (x[0]);
  if ((t) >= (5)) {
    t = 3;
  }
  (x[t]) = t;
  return;
}

}
