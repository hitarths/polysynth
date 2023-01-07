#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb150.h"
namespace ANONYMOUS{

void sketch(int& _out) {
  _out = 0;
  while ((_out) < (5)) {
    _out = _out + 1;
  }
  bool  __sa0=1;
  while (__sa0) {
    _out = _out + 1;
    __sa0 = (_out) < (10);
  }
  while ((_out) < (15)) {
    _out = _out + 1;
  }
  return;
}
void spec(int& _out) {
  _out = 15;
  return;
}

}
