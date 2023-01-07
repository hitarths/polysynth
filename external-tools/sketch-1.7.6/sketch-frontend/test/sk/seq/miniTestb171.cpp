#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb171.h"
namespace ANONYMOUS{

void ta(bool i, int& _out) {
  if (i) {
    _out = 1;
    return;
  } else {
    _out = 0;
    return;
  }
}
void tt(bool i, int& _out) {
  bool*  x= new bool [1]; CopyArr<bool >(x,i, 1);
  bool*  y= new bool [3]; CopyArr<bool >(y,x, 3, 1);
  assert (((y[0])) == (i));;
  _out = i;
  delete[] x;
  delete[] y;
  return;
}

}
