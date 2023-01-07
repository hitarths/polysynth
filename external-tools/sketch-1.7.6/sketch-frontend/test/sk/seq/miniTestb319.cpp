#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb319.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  if (((i % 5)) == (10)) {
    if (((i % 2)) == (0)) {
      ass(i);
      assert ((i) != (16));;
    }
  }
}
void ass(int i) {
  assert (((i % 24)) == (0));;
}

}
