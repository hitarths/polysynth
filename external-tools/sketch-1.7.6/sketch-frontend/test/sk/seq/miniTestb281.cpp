#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb281.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  if ((x) > (0)) {
    if ((x) != (2)) {
      assert (((x / 2)) != ((2 / x)));;
    }
  }
}

}
