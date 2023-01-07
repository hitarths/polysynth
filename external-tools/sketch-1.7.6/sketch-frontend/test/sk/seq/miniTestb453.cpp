#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb453.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* a/* len = n */) {
  _main(n, a);
}
void main__WrapperNospec(int n, int* a/* len = n */) {}
void _main(int n, int* a_0/* len = n */) {
  int*  a= new int [n]; CopyArr<int >(a,a_0, n, n);
  int  m=n + 1;
  int*  b= new int [m]; CopyArr<int >(b,0, m);
  foo1(m, n, b, a);
  if ((n) > (5)) {
    assert (((a[1])) == (3));;
  }
  assert (((b[0])) == (5));;
}
void foo1(int m, int n, int* b/* len = m */, int* a/* len = n */) {
  (b[0]) = 5;
  if ((n) > (5)) {
    (a[1]) = 3;
  }
}

}
