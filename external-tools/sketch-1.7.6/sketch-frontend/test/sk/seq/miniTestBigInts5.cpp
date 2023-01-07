#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestBigInts5.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y) {
  _main(x, y);
}
void main__WrapperNospec(int x, int y) {}
void _main(int x, int y) {
  int  t=x * y;
  t = 2 - t;
  assert ((t) == ((2 - (x * y))));;
}

}
