#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest65.h"
namespace ANONYMOUS{

void p1Sk(bool* x/* len = 5 */, bool& _out) {
  bool*  one= new bool [5]; CopyArr<bool >(one,0, 5);
  (one[0]) = 1;
  bool*  two= new bool [5]; CopyArr<bool >(two,0, 5);
  (two[1]) = 1;
  bool* _tt0= new bool [5]; 
  bool* _tt1= new bool [5]; 
  bool*  five= new bool [5]; CopyArr<bool >(five,SumArr(_tt0, 5, SumArr(_tt1, 5, two, 5, two, 5), 5, one, 5), 5, 5);
  int  idx_s1=0;
  if ((((!((five[0])) & !((five[1]))) & !((five[2]))) & !((five[3]))) & !((five[4]))) {
    idx_s1 = 0;
  } else {
    idx_s1 = 2;
  }
  _out = (x[idx_s1]);
  delete[] one;
  delete[] two;
  delete[] _tt0;
  delete[] _tt1;
  delete[] five;
  return;
}
void spec(bool* x/* len = 5 */, bool& _out) {
  _out = (x[2]);
  return;
}

}
