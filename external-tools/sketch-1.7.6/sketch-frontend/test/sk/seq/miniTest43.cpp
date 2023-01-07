#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest43.h"
namespace ANONYMOUS{

void mergeSort(bool* input/* len = 2 */, bool* _out/* len = 2 */) {
  CopyArr<bool >(_out,1, 2);
  if ((input[0]) && (input[1])) {
    (_out[0]) = 1;
    (_out[1]) = 1;
  }
  if (!((input[0])) && (input[1])) {
    (_out[0]) = 0;
    (_out[1]) = 1;
  }
  if ((input[0]) && !((input[1]))) {
    (_out[0]) = 0;
    (_out[1]) = 1;
  }
  if (!((input[0])) && !((input[1]))) {
    (_out[0]) = 0;
    (_out[1]) = 0;
  }
  return;
}
void sort(bool* input/* len = 2 */, bool* _out/* len = 2 */) {
  CopyArr<bool >(_out,0, 2);
  bool*  done= new bool [2]; CopyArr<bool >(done,0, 2);
  int  k=0;
  for (int  i=0;(i) < (2);i = i + 1){
    bool  cur=1;
    for (int  j=0;(j) < (2);j = j + 1){
      bool  x=(input[j]);
      bool  _pac_sc_s0_s2=!(x) || cur;
      bool  _pac_sc_s0=0;
      _pac_sc_s0 = _pac_sc_s0_s2;
      if (_pac_sc_s0_s2) {
        _pac_sc_s0 = !((done[j]));
      }
      if (_pac_sc_s0) {
        k = j;
        cur = (input[j]);
      }
    }
    (_out[i]) = cur;
    (done[k]) = 1;
  }
  delete[] done;
  return;
}

}
