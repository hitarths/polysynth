#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb208.h"
namespace ANONYMOUS{

void harnessfcn__Wrapper(int x) {
  bool _tt0[144] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  _angels___ANONYMOUS_s31= new int [144]; CopyArr<int >(_angels___ANONYMOUS_s31,_tt0, 144, 144);
  int  _out_s20=0;
  int  _next___ANONYMOUS_s32=0;
  harnessfcn(x, _out_s20, _angels___ANONYMOUS_s31, _next___ANONYMOUS_s32);
  delete[] _angels___ANONYMOUS_s31;
}
void harnessfcn__WrapperNospec(int x) {}
void harnessfcn(int x, int& _out, int* _angels___ANONYMOUS_s29/* len = 144 */, int& _next___ANONYMOUS_s30) {
  int _tt1[8] = {4, 2, 3, 5, 6, 1, 8, 7};
  int*  input= new int [8]; CopyArr<int >(input,_tt1, 8, 8);
  int*  r1_s2= new int [8]; CopyArr<int >(r1_s2,0, 8);
  (r1_s2[0]) = (input[0]);
  for (int  r=1;(r) < (8);r = r + 1){
    (r1_s2[r]) = (r1_s2[(r - 1)]) + (input[r]);
  }
  int*  x_0= new int [8]; CopyArr<int >(x_0,input, 8, 8);
  int _tt2[144] = {1, 4, 1, 4, 1, 6, 5, 2, 7, 0, 1, 3, 0, 4, 0, 0, 1, 2, 5, 2, 5, 0, 0, 1, 4, 4, 6, 4, 1, 1, 0, 0, 1, 0, 0, 0, 4, 1, 0, 0, 0, 1, 1, 3, 2, 1, 2, 6, 4, 5, 3, 0, 1, 0, 0, 0, 2, 1, 7, 3, 0, 0, 0, 2, 7, 7, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  CopyArr<int >(_angels___ANONYMOUS_s29,_tt2, 144, 144);
  _next___ANONYMOUS_s30 = 0;
  int*  y= new int [8]; CopyArr<int >(y,0, 8);
  int  adders=0;
  for (int  step=0;(step) < (3);step = step + 1){
    for (int  r_0=0;(r_0) < (8);r_0 = r_0 + 1){
      int  t=0;
      t = _next___ANONYMOUS_s30;
      _next___ANONYMOUS_s30 = _next___ANONYMOUS_s30 + 1;
      int  _out_s6=(_angels___ANONYMOUS_s29[t]);
      if ((_out_s6) == (0)) {
        int  t_0=_next___ANONYMOUS_s30;
        _next___ANONYMOUS_s30 = _next___ANONYMOUS_s30 + 1;
        int  _out_s8=(_angels___ANONYMOUS_s29[t_0]);
        int  t_1=_next___ANONYMOUS_s30;
        _next___ANONYMOUS_s30 = _next___ANONYMOUS_s30 + 1;
        int  _out_s10=(_angels___ANONYMOUS_s29[t_1]);
        (y[r_0]) = (x_0[(r_0 - _out_s8)]) + (x_0[(r_0 - _out_s10)]);
        adders = adders + 1;
        assert ((adders) <= (12));;
      } else {
        (y[r_0]) = (x_0[r_0]);
        _next___ANONYMOUS_s30 = _next___ANONYMOUS_s30 + 1;
        _next___ANONYMOUS_s30 = _next___ANONYMOUS_s30 + 1;
      }
    }
    CopyArr<int >(x_0,y, 8, 8);
  }
  for (int  i=0;(i) < (8);i = i + 1){
    assert (((r1_s2[i])) == ((x_0[i])));;
  }
  _out = 1;
  delete[] input;
  delete[] r1_s2;
  delete[] x_0;
  delete[] y;
  return;
}

}
