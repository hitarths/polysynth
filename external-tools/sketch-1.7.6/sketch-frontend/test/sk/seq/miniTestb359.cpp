#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb359.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int  x=i;
  int  y=i + 1;
  int  z=i + 2;
  if ((i) > (31)) {
    foo(x, y, z);
  }
  if (((y - 31)) > (4)) {
    int  t1=i;
    int  t2=i + 1;
    int  t3=i + 2;
    foo(t1, t2, t3);
    if ((t3) > (0)) {
      foo(t1, y, t3);
    } else {
      foo(x, t2, z);
    }
  }
}
void foo(int& x, int& y, int& z) {
  assert ((x) < ((y - 31)));;
  assert ((y) < ((z - 0)));;
  assert ((x) > (6));;
  x = x + 1;
  y = y + 1;
  z = z + 1;
}

}
