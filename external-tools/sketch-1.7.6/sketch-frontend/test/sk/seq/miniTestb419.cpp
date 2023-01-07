#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb419.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* ar/* len = n */) {
  _main(n, ar);
}
void main__WrapperNospec(int n, int* ar/* len = n */) {}
void _main(int n, int* ar/* len = n */) {
  if ((n) > (5)) {
    int  x=n / 2;
    int  uo_s0=x;
    x = x - 1;
    assert ((x) <= (uo_s0));;
    int*  tmp= new int [x - 1]; CopyArr<int >(tmp,(ar+ 0), x - 1, x);
    print(x - 1, tmp);
    delete[] tmp;
  }
}
void print(int n, int* ar/* len = n */) {
  assert (((ar[0])) == ((ar[0])));;
}

}
