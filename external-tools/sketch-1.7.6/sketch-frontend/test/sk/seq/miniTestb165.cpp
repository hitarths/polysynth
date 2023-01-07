#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb165.h"
namespace ANONYMOUS{

void too(int x_0, int y, int& _out) {
  int  x=x_0;
  int*  A= new int [4]; CopyArr<int >(A,0, 4);
  if ((x_0) >= (4)) {
    x = 3;
  }
  (A[x]) = y;
  for (int  i=0;(i) < (4);i = i + 1){
    (A[i]) = (A[i]) + 4;
  }
  _out = (A[x]);
  delete[] A;
  return;
}
void foo(int x, int y, int& _out) {
  _out = y + 4;
  return;
}

}
