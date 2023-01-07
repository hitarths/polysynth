#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb360.h"
namespace ANONYMOUS{

void m2__Wrapper(int N, int* x/* len = N */) {
  m2(N, x);
}
void m2__WrapperNospec(int N, int* x/* len = N */) {}
void main__Wrapper(int* i/* len = 5 */) {
  _main(i);
}
void main__WrapperNospec(int* i/* len = 5 */) {}
void m2(int N, int* x/* len = N */) {
  int*  y= new int [N]; CopyArr<int >(y,x, N, N);
  if ((N) > (2)) {
    assert (((y[1])) == ((x[1])));;
  }
}
void _main(int* i_0/* len = 5 */) {
  int*  i= new int [5]; CopyArr<int >(i,i_0, 5, 5);
  int*  x= new int [6]; CopyArr<int >(x,i_0, 6, 5);
  (x[0]) = 20;
  CopyArr<int >(i,x, 5, 6);
  (x[3]) = (i[3]) + 1;
  assert (((x[4])) == ((i[4])));;
  assert (((x[3])) != ((i[3])));;
}

}
