#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb470.h"
namespace ANONYMOUS{

void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  int  t=1 + n;
  int  q=n + 1;
  assert ((t) == (q));;
  int*  x= new int [q]; CopyArr<int >(x,0, q);
  int*  y= new int [t]; CopyArr<int >(y,x, t, q);
  testt(t, y);
  testt(q, x);
  delete[] x;
  delete[] y;
}
void testt(int n, int* a/* len = n */) {}

}
