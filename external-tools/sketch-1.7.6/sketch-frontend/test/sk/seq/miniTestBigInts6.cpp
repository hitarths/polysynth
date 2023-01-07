#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestBigInts6.h"
namespace ANONYMOUS{

void sketch__Wrapper(int x, int y, int z) {
  sketch(x, y, z);
}
void sketch__WrapperNospec(int x, int y, int z) {}
void sketch(int x, int y, int z) {
  assert ((((x * x) * (y + y))) == (((x * x) * (y + y))));;
}

}
