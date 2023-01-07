#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb389.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* in/* len = n */) {
  _main(n, in);
}
void main__WrapperNospec(int n, int* in/* len = n */) {}
void _main(int n, int* in/* len = n */) {
  int*  out= new int [n]; CopyArr<int >(out,0, n);
  int  outsz=0;
  for (int  i=0;(i) < (n);i = i + 1){
    if ((((in[i]) % 3)) == (0)) {
      int  uo_s0=outsz;
      outsz = outsz + 1;
      (out[uo_s0]) = (in[i]);
    }
  }
  int*  xx= new int [outsz]; CopyArr<int >(xx,(out+ 0), outsz, outsz);
  for (int  i_0=0;(i_0) < (outsz);i_0 = i_0 + 1){
    assert ((((xx[i_0]) % 1)) == (0));;
  }
  delete[] out;
  delete[] xx;
}

}
