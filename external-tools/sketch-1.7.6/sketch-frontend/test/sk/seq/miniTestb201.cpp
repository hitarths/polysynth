#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb201.h"
namespace ANONYMOUS{

void main_fun(bool a, bool b, bool c, bool& _out) {
  if (b) {
    _out = 1;
    return;
  } else {
    _out = a ^ c;
    return;
  }
}
void VOID(bool a, bool b, bool c, bool& _out) {
  bool  x=0;
  if (b & c) {
    x = a ^ b;
  } else {
    x = a ^ c;
  }
  _out = (x & !(b)) | b;
  return;
}

}
