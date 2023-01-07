#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb402.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  a=x;
  call_foo1(a);
  assert ((a) == ((x + 1)));;
}
void call_foo1(int& a0) {
  a0 = a0 + 1;
}

}
