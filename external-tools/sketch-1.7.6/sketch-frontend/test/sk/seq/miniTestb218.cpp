#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb218.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i_0) {
  int  i=i_0;
  i = i_0 - 25;
  if ((i) < (0)) {
    return;
  }
  while ((i) != (0)) {
    i = i - 1;
  }
  assert ((i) == (0));;
}

}
