#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest82.h"
namespace ANONYMOUS{

void test(bool* a/* len = 2 */, int& _out) {
  bool _tt0[2] = {0, 0};
  bool*  m= new bool [2]; CopyArr<bool >(m,_tt0, 2, 2);
  (m[0]) = 1;
  bool _tt1[4] = {0, 0, 0, 0};
  bool*  mm= new bool [4]; CopyArr<bool >(mm,_tt1, 4, 4);
  CopyArr<bool >((mm+ 0),m, 2, 2);
  CopyArr<bool >((mm+ 2),m, 2, 2);
  int  _out_s2=0;
  count(a, _out_s2);
  _out = _out_s2;
  delete[] m;
  delete[] mm;
  return;
}
void count(bool* a/* len = 2 */, int& _out) {
  _out = 0;
  for (int  i=0;(i) < (2);i = i + 1){
    if ((a[i])) {
      _out = _out + 1;
    }
  }
  return;
}

}
