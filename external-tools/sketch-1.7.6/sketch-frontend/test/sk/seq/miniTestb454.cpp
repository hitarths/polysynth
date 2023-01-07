#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb454.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int  x_s1=0;
  foo(1, 0, x_s1);
  assert ((x_s1) == (0));;
}
void foo(int i, int j, int& _out) {
  _out = j;
  return;
}

}
