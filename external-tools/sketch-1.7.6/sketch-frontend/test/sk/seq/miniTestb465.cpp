#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb465.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {
  _main(n, x1, q, y1);
}
void main__WrapperNospec(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {}
void _main(int n, int* x1/* len = n */, int q, int* y1/* len = q */) {
  int*  x_s1= new int [n]; CopyArr<int >(x_s1,0, n);
  foo(n, x1, x_s1);
  int*  y_s3= new int [q]; CopyArr<int >(y_s3,0, q);
  foo(q, y1, y_s3);
  if (arrCompare(x1, n, y1, q) && ((n) == (q))) {
    assert (arrCompare(x_s1, n, y_s3, q) && ((n) == (q)));;
  }
}
void foo(int n, int* x/* len = n */, int* _out/* len = n */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, n);

}

}
