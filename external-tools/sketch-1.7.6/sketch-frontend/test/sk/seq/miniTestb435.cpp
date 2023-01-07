#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb435.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {
  _main(n, x1, q, y1);
}
void main__WrapperNospec(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {}
void _main(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {
  int*  x_s7= new int [n]; CopyArr<int >(x_s7,0, n);
  foo(n, x1, x_s7);
  int*  x= new int [n]; CopyArr<int >(x,0, n);
  CopyArr<int >(x,x_s7, n, n);
  int*  y_s9= new int [q]; CopyArr<int >(y_s9,0, q);
  foo(q, y1, y_s9);
  int*  y= new int [q]; CopyArr<int >(y,0, q);
  CopyArr<int >(y,y_s9, q, q);
  if ((x1) != (y1)) {
  delete[] x_s7;
  delete[] x;
  delete[] y_s9;
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
void foo(int n, int* x/* len = n */, int* _out/* len = n */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, n);

}

}
