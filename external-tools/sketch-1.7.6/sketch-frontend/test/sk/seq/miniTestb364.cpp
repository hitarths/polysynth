#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb364.h"
namespace ANONYMOUS{

void avgT(bool* x/* len = 5 */, bool* y/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  xx= new bool [10]; CopyArr<bool >(xx,x, 10, 5);
  bool*  yy= new bool [10]; CopyArr<bool >(yy,y, 10, 5);
  bool* _tt0= new bool [10]; 
  CopyArr<bool >(_out,(SumArr(_tt0, 10, xx, 10, yy, 10)+ 0), 5, 5);
  delete[] xx;
  delete[] yy;
  delete[] _tt0;
  return;
}
void avg(bool* x/* len = 5 */, bool* y/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  xx= new bool [10]; CopyArr<bool >(xx,x, 10, 5);
  bool*  yy= new bool [10]; CopyArr<bool >(yy,y, 10, 5);
  bool* _tt1= new bool [10]; 
  CopyArr<bool >(_out,(SumArr(_tt1, 10, xx, 10, yy, 10)+ 0), 5, 5);
  delete[] xx;
  delete[] yy;
  delete[] _tt1;
  return;
}

}
