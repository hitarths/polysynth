#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb264.h"
namespace ANONYMOUS{

void mainb__Wrapper(int* x/* len = 3 * 4 */) {
  mainb(x);
}
void mainb__WrapperNospec(int* x/* len = 3 * 4 */) {}
void mainb(int* x/* len = 3 * 4 */) {
  int*  y= new int [3]; CopyArr<int >(y,(x+ 6), 3, 3);
  assert (((y[1])) == ((x[7])));;
  delete[] y;
}

}
