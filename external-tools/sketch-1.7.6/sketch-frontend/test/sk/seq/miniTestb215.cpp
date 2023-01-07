#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb215.h"
namespace ANONYMOUS{

void foo(bool* x/* len = 3 */, bool* y/* len = 3 */, bool& _out) {
  bool* _tt0= new bool [3]; 
  _out = (arrCompare(x, 3, y, 3) && ((3) == (3)) ? ((((arrCompare(x, 3, y, 3) && ((3) == (3))) - 1) + 1)) == (1) : ((((arrCompare(SumArr(_tt0, 3, x, 3, y, 3), 3, x, 3) && ((3) == (3))) - 1) + 1)) == (1));
  delete[] _tt0;
  return;
}
void fooSK(bool* x/* len = 3 */, bool* y/* len = 3 */, bool& _out) {
  bool* _tt1= new bool [3]; 
  _out = (arrCompare(x, 3, y, 3) && ((3) == (3)) ? arrCompare(x, 3, y, 3) && ((3) == (3)) : arrCompare(SumArr(_tt1, 3, x, 3, y, 3), 3, x, 3) && ((3) == (3)));
  delete[] _tt1;
  return;
}

}
