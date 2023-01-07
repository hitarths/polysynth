#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest68.h"
namespace ANONYMOUS{

void ShiftRowsSK(bool* in/* len = 128 */, bool* _out/* len = 128 */) {
  int _tt0[4] = {0, 1, 2, 3};
  int*  shift= new int [4]; CopyArr<int >(shift,_tt0, 4, 4);
  bool*  Sin= new bool [128]; CopyArr<bool >(Sin,0, 128);
  CopyArr<bool >(_out,0, 128);
  int  k=0;
  for (int  c=0;(c) < (4);c = c + 1){
    for (int  r=0;(r) < (4);r = r + 1){
      CopyArr<bool >((Sin+ 8 * (r + (4 * c))),(in+ k), 8, 8);
      k = k + 8;
    }
  }
  for (int  c_0=0;(c_0) < (4);c_0 = c_0 + 1){
    for (int  r_0=0;(r_0) < (4);r_0 = r_0 + 1){
      int  newc=(c_0 + (shift[r_0])) % 4;
      CopyArr<bool >((_out+ 8 * (r_0 + (4 * c_0))),(Sin+ 8 * (r_0 + (4 * newc))), 8, 8);
    }
  }
  delete[] shift;
  delete[] Sin;
  return;
}
void ShiftRows(bool* in/* len = 128 */, bool* _out/* len = 128 */) {
  int _tt1[4] = {0, 1, 2, 3};
  int*  shift= new int [4]; CopyArr<int >(shift,_tt1, 4, 4);
  bool*  Sin= new bool [128]; CopyArr<bool >(Sin,0, 128);
  CopyArr<bool >(_out,0, 128);
  int  k=0;
  for (int  c=0;(c) < (4);c = c + 1){
    for (int  r=0;(r) < (4);r = r + 1){
      CopyArr<bool >((Sin+ 8 * (r + (4 * c))),(in+ k), 8, 8);
      k = k + 8;
    }
  }
  for (int  c_0=0;(c_0) < (4);c_0 = c_0 + 1){
    for (int  r_0=0;(r_0) < (4);r_0 = r_0 + 1){
      int  newc=(c_0 + (shift[r_0])) % 4;
      CopyArr<bool >((_out+ 8 * (r_0 + (4 * c_0))),(Sin+ 8 * (r_0 + (4 * newc))), 8, 8);
    }
  }
  delete[] shift;
  delete[] Sin;
  return;
}

}
