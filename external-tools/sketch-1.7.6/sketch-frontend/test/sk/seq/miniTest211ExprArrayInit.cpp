#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest211ExprArrayInit.h"
namespace ANONYMOUS{

void main__Wrapper(int in_) {
  _main(in_);
}
void main__WrapperNospec(int in_) {}
void _main(int in_) {
  bool _tt0[2] = {0, 0};
  int*  array2_s1= new int [2]; CopyArr<int >(array2_s1,_tt0, 2, 2);
  f(-3, 4, array2_s1);
  assert ((((array2_s1[1]) + in_)) == ((in_ + 4)));;
  delete[] array2_s1;
}
void f(int x, int y, int* _out/* len = 2 */) {
  int _tt1[2] = {x, y};
  CopyArr<int >(_out,_tt1, 2, 2);
  return;
}

}
