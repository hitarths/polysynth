#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb469.h"
namespace ANONYMOUS{

void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  int  t=1 + n;
  int  q=t;
  int*  x= new int [q]; CopyArr<int >(x,0, q);
  t = n * 10;
  if ((n) > (2)) {
    test((x[n]));
  }
  int  p=n + 10;
  int*  y= new int [p]; CopyArr<int >(y,x, p, q);
  for (int  i=n;(i) < ((n + 10));i = i + 1){
    assert (((y[i])) == (0));;
  }
  testt(p, y);
  int * _tt0= new int [p]; 
  CopyArr<int>(_tt0,x, p, q);
  testt(p, _tt0);
  test(t);
  delete[] x;
  delete[] y;
  delete[] _tt0;
}
void test(int n) {}
void testt(int n, int* a/* len = n */) {}

}
