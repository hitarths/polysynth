#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb436.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {
  _main(n, x1, q, y1);
}
void main__WrapperNospec(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {}
void _main(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {
  int*  x= new int [n]; CopyArr<int >(x,0, n);
  CopyArr<int >(x,x1, n, n);
  int*  y= new int [q]; CopyArr<int >(y,0, q);
  CopyArr<int >(y,y1, q, q);
  foo(n, x);
  foo(q, y);
  if ((x1) != (y1)) {
  delete[] x;
  delete[] y;
    return;
  }
  if ((n) == (q)) {
    assert (arrCompare(x, n, y, q) && ((n) == (q)));;
  }
  if (((n) > (3)) && ((q) > (3))) {
    if ((n) == (q)) {
      assert (((x[2])) == ((y[2])));;
    }
  }
}
void foo(int n, int* x/* len = n */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(x,0, n);

}

}
