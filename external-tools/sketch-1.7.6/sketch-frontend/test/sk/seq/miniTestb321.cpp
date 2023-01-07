#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb321.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  int  x=in + 1;
  assert ((x) == (((in - 1) + 2)));;
  apply_ma4(x);
  assert ((x) == (((in - 1) + 4)));;
}
void apply_ma4(int& x0) {
  x0 = x0 + 2;
}

}
