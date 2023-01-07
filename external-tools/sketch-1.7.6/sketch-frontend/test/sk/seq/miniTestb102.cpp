#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb102.h"
namespace ANONYMOUS{

void parallel1(bool* in/* len = 8 */, bool& _out) {
  int*  pc= new int [2]; CopyArr<int >(pc,0, 2);
  int*  mem= new int [8]; CopyArr<int >(mem,0, 8);
  (mem[0]) = -1;
  (mem[1]) = 2;
  (mem[2]) = 4;
  (mem[3]) = -1;
  int _tt0[2] = {5, 6};
  int*  data= new int [2]; CopyArr<int >(data,_tt0, 2, 2);
  int*  ne= new int [2]; CopyArr<int >(ne,0, 2);
  int*  oldTail= new int [2]; CopyArr<int >(oldTail,0, 2);
  int  malloc=4;
  int  tail=2;
  for (int  t=0;(t) < (8);t = t + 1){
    bool  runThr0=((in[t]) && (((pc[1])) < (4))) || (((pc[0])) >= (4));
    if (((pc[runThr0])) == (0)) {
      (ne[runThr0]) = malloc;
      malloc = malloc + 2;
    }
    if (((pc[runThr0])) == (1)) {
      (mem[(ne[runThr0])]) = (data[runThr0]);
      (mem[(ne[runThr0]) + 1]) = -1;
    }
    if (((pc[runThr0])) == (2)) {
      (oldTail[runThr0]) = tail;
      int  tmp=(ne[runThr0]);
      tail = tmp;
    }
    if (((pc[runThr0])) == (3)) {
      (mem[(oldTail[runThr0]) + 1]) = (ne[runThr0]);
    }
    (pc[runThr0]) = (pc[runThr0]) + 1;
  }
  _out = ((((((mem[2])) == (4)) && (((mem[4])) == (5))) && (((mem[6])) == (6))) || (((((mem[2])) == (4)) && (((mem[4])) == (6))) && (((mem[6])) == (5)))) && (((((((mem[3])) == (4)) && (((mem[5])) == (6))) && (((mem[7])) == (-1))) && ((tail) == (6))) || ((((((mem[3])) == (6)) && (((mem[7])) == (4))) && (((mem[5])) == (-1))) && ((tail) == (4))));
  delete[] pc;
  delete[] mem;
  delete[] data;
  delete[] ne;
  delete[] oldTail;
  return;
}
void one(bool* in/* len = 8 */, bool& _out) {
  _out = 1;
  return;
}

}
