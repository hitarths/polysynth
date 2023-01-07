#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb456.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  if ((i) > (2)) {
    if (((i * i)) < (i)) {
      int _tt0[4] = {1, 2, 3, 4};
      foo(_tt0);
    } else {
      assert ((i) == (i));;
    }
  }
}
void foo(int* tt/* len = 4 */) {
  assert (0);;
}

}
