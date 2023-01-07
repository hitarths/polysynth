#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb357.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  bool _tt0[5] = {1, 1, 1, 1, 1};
  bool*  x= new bool [(5 - i) + i]; CopyArr<bool >(x,_tt0, (5 - i) + i, 5);
  bool _tt1[2] = {0, 0};
  bool*  y= new bool [(2 - i) + i]; CopyArr<bool >(y,_tt1, (2 - i) + i, 2);
  bool * _tt2= new bool [(((((5 - i) + i)) < (((2 - i) + i))) ? ((2 - i) + i) : ((5 - i) + i))]; 
  bool _tt3[5] = {1, 1, 1, 1, 1};
  assert (arrCompare(bitwise(logical_or<bool>(), _tt2, (((((5 - i) + i)) < (((2 - i) + i))) ? ((2 - i) + i) : ((5 - i) + i)), x, ((5 - i) + i), y, ((2 - i) + i)), (((((5 - i) + i)) < (((2 - i) + i))) ? ((2 - i) + i) : ((5 - i) + i)), _tt3, 5) && (((((((5 - i) + i)) < (((2 - i) + i))) ? ((2 - i) + i) : ((5 - i) + i))) == (5)));;
  delete[] x;
  delete[] y;
  delete[] _tt2;
}

}
