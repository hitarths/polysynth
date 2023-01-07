#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb387.h"
namespace ANONYMOUS{

void foo__Wrapper(int m, int* x/* len = m */, int n, int* y/* len = n */, int* z/* len = 7 */) {
  foo(m, x, n, y, z);
}
void foo__WrapperNospec(int m, int* x/* len = m */, int n, int* y/* len = n */, int* z/* len = 7 */) {}
void moo__Wrapper(int n, int* x/* len = n */) {
  moo(n, x);
}
void moo__WrapperNospec(int n, int* x/* len = n */) {}
void too__Wrapper(int m, int n, int* x/* len = n * m */, int* y/* len = n * m */, int* z/* len = m * n */) {
  too(m, n, x, y, z);
}
void too__WrapperNospec(int m, int n, int* x/* len = n * m */, int* y/* len = n * m */, int* z/* len = m * n */) {}
void foo(int m, int* x/* len = m */, int n, int* y/* len = n */, int* z/* len = 7 */) {
  int*  zz= new int [8]; CopyArr<int >(zz,z, 8, 7);
  assert (!(arrCompare(zz, 8, z, 7) && ((8) == (7))));;
  if (arrCompare(x, m, y, n) && ((m) == (n))) {
    assert ((m) == (n));;
  }
}
void moo(int n, int* x/* len = n */) {
  int  t=0;
  if ((n) > (0)) {
    t = (x[0]);
  }
  int  _tt0[1] = {t};
  if (arrCompare(x, n, _tt0, 1) && ((n) == (1))) {
    assert ((n) == (1));;
  }
  int  _tt1[1] = {t};
  if (arrCompare(_tt1, 1, x, n) && ((1) == (n))) {
    assert ((n) == (1));;
  }
}
void too(int m, int n, int* x/* len = n * m */, int* y/* len = n * m */, int* z/* len = m * n */) {
  if (arrCompare(x, (n * m), y, (n * m)) && (((m) == (m)) && ((n) == (n)))) {
    if (((n) > (0)) && ((m) > (0))) {
      assert ((0) < (m));;
      assert ((0) < (n));;
      assert ((0) < (m));;
      assert ((0) < (n));;
      assert (((x[0])) == ((y[0])));;
    }
  }
  if (arrCompare(x, (n * m), z, (m * n)) && (((m) == (n)) && ((n) == (m)))) {
    assert ((m) == (n));;
  }
}

}
