#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb464.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  int _tt0[2] = {1, 2};
  int _tt1[2] = {2, 3};
  assert ((_tt0) != (_tt1));;
}

}
