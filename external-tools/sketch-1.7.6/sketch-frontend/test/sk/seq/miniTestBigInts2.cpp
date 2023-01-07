#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestBigInts2.h"
namespace ANONYMOUS{

void sketch__Wrapper(int x, int y, int z) {
  sketch(x, y, z);
}
void sketch__WrapperNospec(int x, int y, int z) {}
void sketch(int x, int y, int z) {
  int  b_s5=z + (z + (y + y));
  assert (((x * b_s5)) == (((x + x) * (y + z))));;
}

}
