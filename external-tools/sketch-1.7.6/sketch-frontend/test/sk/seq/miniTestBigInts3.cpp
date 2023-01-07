#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestBigInts3.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y) {
  _main(x, y);
}
void main__WrapperNospec(int x, int y) {}
void _main(int x, int y) {
  if ((x) > (y)) {
    assert ((((x * y) + (7 * x))) == (((7 * x) + (x * y))));;
  }
}

}
