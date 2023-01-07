#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb211.h"
namespace ANONYMOUS{

void fooSK(bool& _out) {
  _out = 1;
  return;
}
void foo(bool& _out) {
  bool _tt0[4] = {1, 1, 1, 1};
  bool*  x= new bool [4]; CopyArr<bool >(x,_tt0, 4, 4);
  bool _tt1[4] = {1, 0, 1, 0};
  bool*  y= new bool [4]; CopyArr<bool >(y,_tt1, 4, 4);
  bool* _tt2= new bool [4]; 
  bool* _tt3= new bool [4]; 
  _out = arrCompare(SumArr(_tt2, 4, x, 4, y, 4), 4, SumArr(_tt3, 4, y, 4, x, 4), 4) && ((4) == (4));
  delete[] x;
  delete[] y;
  delete[] _tt2;
  delete[] _tt3;
  return;
}

}
