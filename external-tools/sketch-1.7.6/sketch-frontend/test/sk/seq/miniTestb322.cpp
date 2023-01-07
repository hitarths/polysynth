#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb322.h"
namespace ANONYMOUS{

void main__Wrapper(int t0, int t1, int N, int i) {
  _main(t0, t1, N, i);
}
void main__WrapperNospec(int t0, int t1, int N, int i) {}
void _main(int t0, int t1, int N, int i) {
  if ((((t0) < (N)) && ((t0) >= (0))) && (((t1) < (N)) && ((t1) >= (0)))) {
    foo(t0, t1, N, i);
  }
}
void foo(int t0, int t1, int N, int i) {
  assert ((t0) < (N));;
  assert ((t0) >= (0));;
  assert ((t1) < (N));;
  assert ((t1) >= (0));;
  if ((i) > (2)) {
    moo(t0, t1, N);
  }
}
void moo(int t0, int t1, int N) {
  assert ((t0) < (N));;
  assert ((t0) >= (0));;
  assert ((t1) < (N));;
  assert ((t1) >= (0));;
}

}
