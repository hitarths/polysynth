#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb433.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int q) {
  _main(n, q);
}
void main__WrapperNospec(int n, int q) {}
void _main(int n, int q) {
  int*  x_s2= new int [n]; CopyArr<int >(x_s2,0, n);
  foo(n, x_s2);
  int*  y_s4= new int [q]; CopyArr<int >(y_s4,0, q);
  foo(q, y_s4);
  if ((n) == (q)) {
    assert (arrCompare(x_s2, n, y_s4, q) && ((n) == (q)));;
  }
  if (((n) > (3)) && ((q) > (3))) {
    if ((n) == (q)) {
      assert (((x_s2[2])) == ((y_s4[2])));;
    }
  }
}
void foo(int n, int* _out/* len = n */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, n);

}

}
