#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb268.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int _tt0[2] = {2, 0};
  int*  X= new int [2]; CopyArr<int >(X,_tt0, 2, 2);
  test(X);
  delete[] X;
}
void test(int* t/* len = 2 */) {}

}
