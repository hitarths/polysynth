#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb117.h"
namespace ANONYMOUS{

void sketch(bool* in/* len = 3 */, int& _out) {
  _out = 0;
  bool  done=0;
  for (int  i=0;(i) < (3);i = i + 1){
    if ((in[i]) && !(done)) {
      _out = _out + 1;
    } else {
      done = 1;
    }
  }
  return;
}
void test(bool* in/* len = 3 */, int& _out) {
  _out = 0;
  bool  __sa0=(in[0]);
  int  i=0;
  while (__sa0) {
    _out = _out + 1;
    i = i + 1;
    __sa0 = ((i) < (3)) && (in[i]);
  }
  return;
}

}
