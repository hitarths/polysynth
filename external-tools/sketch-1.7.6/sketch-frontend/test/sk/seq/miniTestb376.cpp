#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb376.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  c=0;
  int  a=0;
  int  b=0;
  if ((x) > (3)) {
    foo(x, a, b, c);
    if ((b) > (4)) {
      int  cx=0;
      int  ax=0;
      int  bx=0;
      foo(x, ax, bx, cx);
      assert ((x) == (ax));;
    }
    assert ((x) == (a));;
  }
}
void foo(int x, int& a, int& b, int& c) {
  a = x + b;
  b = x - b;
  c = x + a;
}

}
