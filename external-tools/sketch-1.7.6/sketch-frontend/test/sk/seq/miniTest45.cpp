#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest45.h"
namespace ANONYMOUS{

void mergeSort(bool* input/* len = 3 */, bool& _out) {
  bool*  done= new bool [3]; CopyArr<bool >(done,0, 3);
  int  k=0;
  if (!((input[2]))) {
    k = 2;
  } else {
    if (!((input[1]))) {
      k = 1;
    } else {
      if (!((input[0]))) {
        k = 0;
      } else {
        k = 2;
      }
    }
  }
  (done[k]) = 1;
  bool  cur=1;
  for (int  j=0;(j) < (3);j = j + 1){
    bool  x=(input[j]);
    bool  _pac_sc_s0_s2=!(x) || cur;
    bool  _pac_sc_s0=0;
    _pac_sc_s0 = _pac_sc_s0_s2;
    if (_pac_sc_s0_s2) {
      _pac_sc_s0 = !((done[j]));
    }
    if (_pac_sc_s0) {
      cur = (input[j]);
    }
  }
  _out = cur;
  delete[] done;
  return;
}
void sort(bool* input/* len = 3 */, bool& _out) {
  _out = 1;
  if (((input[0]) && (input[1])) && (input[2])) {
    _out = 1;
  }
  if ((((!((input[0])) && (input[1])) && (input[2])) || (((input[0]) && !((input[1]))) && (input[2]))) || (((input[0]) && (input[1])) && !((input[2])))) {
    _out = 1;
  }
  if (((((input[0]) && !((input[1]))) && !((input[2]))) || ((!((input[0])) && (input[1])) && !((input[2])))) || ((!((input[0])) && !((input[1]))) && (input[2]))) {
    _out = 0;
  }
  if ((!((input[0])) && !((input[1]))) && !((input[2]))) {
    _out = 0;
  }
  return;
}

}
