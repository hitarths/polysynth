#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest50.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  int  t=0;
  if ((in[0])) {
    t = 7;
  } else {
    t = 6;
  }
  _out = (in[t % 5]);
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  int  t=0;
  if ((in[0])) {
    t = 5;
  } else {
    t = 4;
  }
  _out = (in[t % 3]);
  return;
}

}
