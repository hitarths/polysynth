#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb422.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y, int z, int i) {
  _main(x, y, z, i);
}
void main__WrapperNospec(int x, int y, int z, int i) {}
void _main(int x, int y, int z, int i) {
  int*  A= new int [(x + y) + z]; CopyArr<int >(A,0, (x + y) + z);
  if (((((x) > (5)) && ((y) > (5))) && ((z) > (5))) && ((i) < (2))) {
    assert (((x + (y + -3))) <= ((x + y)));;
    assert ((3) <= ((y + -3)));;
    (A[(i + x) + 3]) = 1;
    assert (((A[((i + x) + 3)])) == (1));;
  }
}

}
