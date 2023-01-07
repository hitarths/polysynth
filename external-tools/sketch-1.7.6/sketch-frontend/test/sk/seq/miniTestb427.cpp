#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb427.h"
namespace ANONYMOUS{

template<typename T_0>
Temp* Temp::create(int  n_, T_0* fa_, int fa_len){
  int tlen_fa = n_ / 2; 
  void* temp= malloc( sizeof(Temp)   + sizeof(int )*tlen_fa); 
  Temp* rv = new (temp)Temp();
  rv->n =  n_;
  CopyArr(rv->fa, fa_, tlen_fa, fa_len ); 
  return rv;
}
void main__Wrapper(int n) {
  _main(n);
}
void main__WrapperNospec(int n) {}
void _main(int n) {
  int*  x= new int [n]; CopyArr<int >(x,0, n);
  int*  y= new int [n / 2]; CopyArr<int >(y,0, n / 2);
  foo1(n, x, y);
  delete[] x;
  delete[] y;
}
void foo1(int n, int* x/* len = n */, int* y/* len = n / 2 */) {
  for (int  i=0;(i) < ((n / 2));i = i + 1){
    (y[i]) = (x[2 * i]);
  }
}

}
