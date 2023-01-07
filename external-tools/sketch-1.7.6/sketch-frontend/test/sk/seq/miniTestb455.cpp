#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb455.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  if ((i) > (2)) {
    if (((i * i)) < (i)) {
      foo(i);
    } else {
      assert ((i) == (i));;
    }
  }
}
void foo(int i) {
  assert (0);;
}

}
