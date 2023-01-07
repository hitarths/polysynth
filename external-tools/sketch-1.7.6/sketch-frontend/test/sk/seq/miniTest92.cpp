#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest92.h"
namespace ANONYMOUS{

void test92SK(bool* in/* len = 5 */, bool* _out/* len = 5 */) {
  bool _tt0[160] = {0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1};
  bool*  gT0= new bool [160]; CopyArr<bool >(gT0,_tt0, 160, 160);
  int  t3=bvToInt(in, 5);
  CopyArr<bool >(_out,(gT0+ 5 * t3), 5, 5);
  delete[] gT0;
  return;
}
void test92(bool* in/* len = 5 */, bool* _out/* len = 5 */) {
  bool* _tt1= new bool [5]; 
  bool* _tt2= new bool [5]; 
  CopyArr<bool >(_out,SumArr(_tt1, 5, SumArr(_tt2, 5, in, 5, in, 5), 5, in, 5), 5, 5);
  delete[] _tt1;
  delete[] _tt2;
  return;
}

}
