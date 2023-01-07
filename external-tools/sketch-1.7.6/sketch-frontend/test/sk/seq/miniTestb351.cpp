#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb351.h"
namespace ANONYMOUS{

void main__Wrapper(int y) {
  int  x__ANONYMOUS_s6=0;
  glblInit_x__ANONYMOUS_s8(x__ANONYMOUS_s6);
  _main(y, x__ANONYMOUS_s6);
}
void main__WrapperNospec(int y) {}
void glblInit_x__ANONYMOUS_s8(int& x__ANONYMOUS_s7) {
  x__ANONYMOUS_s7 = 0;
}
void _main(int y, int& x__ANONYMOUS_s5) {
  x__ANONYMOUS_s5 = 27;
  int*  b= new int [27]; CopyArr<int >(b,0, 27);
  bool _tt0[27] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  b_s1= new int [27]; CopyArr<int >(b_s1,_tt0, 27, 27);
  arr(27, b, b_s1, x__ANONYMOUS_s5);
  for (int  i=0;(i) < (27);i = i + 1){
    assert (((b_s1[i])) == (27));;
  }
  x__ANONYMOUS_s5 = y;
  int*  c= new int [y]; CopyArr<int >(c,0, y);
  int*  c_s3= new int [x__ANONYMOUS_s5]; CopyArr<int >(c_s3,0, x__ANONYMOUS_s5);
  arr(y, c, c_s3, x__ANONYMOUS_s5);
  CopyArr<int >(c,c_s3, y, x__ANONYMOUS_s5);
  for (int  i_0=0;(i_0) < (y);i_0 = i_0 + 1){
    assert (((c[i_0])) == (y));;
  }
  delete[] b;
  delete[] b_s1;
  delete[] c;
  delete[] c_s3;
}
void arr(int x, int* t/* len = x */, int* _out/* len = x */, int& x__ANONYMOUS_s4) {
  CopyArr<int >(_out,0, x);
  for (int  i=0;(i) < (x);i = i + 1){
    (_out[i]) = x;
  }
  return;
}

}
