#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb361.h"
namespace ANONYMOUS{

void main__Wrapper(int n, bool* x/* len = n */, int i) {
  _main(n, x, i);
}
void main__WrapperNospec(int n, bool* x/* len = n */, int i) {}
void _main(int n, bool* x/* len = n */, int i) {
  if ((n) < (10)) {
    bool*  xx= new bool [10]; CopyArr<bool >(xx,x, 10, n);
    bool _tt0[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int*  yy_s1= new int [15]; CopyArr<int >(yy_s1,_tt0, 15, 15);
    bool * _tt1= new bool [15]; 
    CopyArr<bool>(_tt1,xx, 15, 10);
    foo(15, _tt1, yy_s1);
    int*  yy= new int [20]; CopyArr<int >(yy,0, 20);
    CopyArr<int >(yy,yy_s1, 20, 15);
    if (((i) < (n)) && ((i) > (0))) {
      assert (((yy[i])) == ((1 - (x[i]))));;
    }
    if (((i) >= (n)) && ((i) < (15))) {
      assert (((yy[i])) == (1));;
    }
    if (((i) >= (15)) && ((i) < (20))) {
      assert (((yy[i])) == (0));;
    }
  }
}
void foo(int k, bool* x/* len = k */, int* _out/* len = k */) {
  CopyArr<int >(_out,0, k);
  for (int  i=0;(i) < (k);i = i + 1){
    (_out[i]) = 1 - (x[i]);
  }
  return;
}

}
