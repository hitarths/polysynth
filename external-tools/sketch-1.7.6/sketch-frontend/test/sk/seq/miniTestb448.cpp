#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb448.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* x/* len = n */) {
  _main(n, x);
}
void main__WrapperNospec(int n, int* x/* len = n */) {}
void foo__Wrapper(int n, int* x/* len = n */) {
  int  _out_s3=0;
  foo(n, x, _out_s3);
}
void foo__WrapperNospec(int n, int* x/* len = n */) {}
void _main(int n, int* x/* len = n */) {
  if ((n) > (3)) {
    int  v_s1=0;
    foo(n, x, v_s1);
    assert (((x[0])) == ((x[0])));;
    assert ((v_s1) == (4));;
  }
}
void foo(int n, int* x_0/* len = n */, int& _out) {
  int*  x= new int [n]; CopyArr<int >(x,x_0, n, n);
  if ((n) > (3)) {
    (x[0]) = 4;
    assert (((x[0])) > (2));;
    _out = (x[0]);
  delete[] x;
    return;
  }
  _out = 5;
  delete[] x;
  return;
}

}
