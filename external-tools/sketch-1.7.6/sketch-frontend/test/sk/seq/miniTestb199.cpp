#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb199.h"
namespace ANONYMOUS{

void main_fun(bool a, bool b, bool c, bool& _out) {
  _out = (a & c) & !(b);
  return;
}
void VOID(bool a, bool b, bool c, bool& _out) {
  _out = (a & !(b)) & (!(b) & c);
  return;
}

}
