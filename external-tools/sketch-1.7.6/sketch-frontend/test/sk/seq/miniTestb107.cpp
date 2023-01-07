#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb107.h"
namespace ANONYMOUS{

void test(bool* in/* len = 3 */, bool& _out) {
  int*  pc= new int [2]; CopyArr<int >(pc,0, 2);
  bool*  thrState_waiting= new bool [2]; CopyArr<bool >(thrState_waiting,0, 2);
  int  locks_4=-1;
  for (int  i=0;(i) < (3);i = i + 1){
    bool  me=(in[i]);
    if (((pc[me])) == (0)) {
      if (((locks_4) == (-1)) || ((locks_4) == (me))) {
        locks_4 = me;
        (pc[me]) = 1;
      } else {
        (thrState_waiting[me]) = 1;
      }
    } else {
      if (((pc[me])) == (1)) {
        assert ((locks_4) == (me));;
        locks_4 = -1;
        (pc[me]) = 2;
      }
    }
  }
  _out = 1;
  delete[] pc;
  delete[] thrState_waiting;
  return;
}
void alwaysTrue(bool* in/* len = 3 */, bool& _out) {
  _out = 1;
  return;
}

}
