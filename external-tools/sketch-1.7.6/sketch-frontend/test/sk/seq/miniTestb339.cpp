#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb339.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* in/* len = n */) {
  _main(n, in);
}
void main__WrapperNospec(int n, int* in/* len = n */) {}
void _main(int n, int* in_0/* len = n */) {
  if ((n) > (2)) {
    assert ((((in_0[0]) + 3)) == (((in_0[0]) + 3)));;
  }
}

}
