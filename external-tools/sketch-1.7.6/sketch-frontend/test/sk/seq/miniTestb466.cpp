#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb466.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* t/* len = n */) {
  _main(n, t);
}
void main__WrapperNospec(int n, int* t/* len = n */) {}
void _main(int n, int* t_0/* len = n */) {
  int*  t= new int [n]; CopyArr<int >(t,t_0, n, n);
  if ((n) < (4)) {
  delete[] t;
    return;
  }
  if ((n) > (5)) {
    int  _out_s1=0;
    foo(1, _out_s1);
    int  _out_s3=0;
    foo(n, _out_s3);
    (t[_out_s1]) = _out_s3;
    assert (((t[2])) == ((n + 1)));;
  }
  bool _tt0[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
  int*  x= new int [10]; CopyArr<int >(x,_tt0, 10, 10);
  if ((n) > (3)) {
    bool _tt1[5] = {0, 0, 0, 0, 0};
    int*  x_s5= new int [5]; CopyArr<int >(x_s5,_tt1, 5, 5);
    mvec(5, x_s5);
    CopyArr<int >(x,x_s5, 10, 5);
  }
  assert (((x[4])) == (1));;
  assert (((x[7])) == (0));;
  bool _tt2[10] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
  int*  xx= new int [10]; CopyArr<int >(xx,_tt2, 10, 10);
  if ((n) > (3)) {
    mvecR(5, (xx+ 0));
  }
  assert (((xx[4])) == (1));;
}
void foo(int x, int& _out) {
  _out = x + 1;
  return;
}
void mvec(int n, int* _out/* len = n */) {
  CopyArr<int >(_out,0, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = 1;
  }
  return;
}
void mvecR(int n, int* out/* len = n */) {
  for (int  i=0;(i) < (n);i = i + 1){
    (out[i]) = 1;
  }
}

}
