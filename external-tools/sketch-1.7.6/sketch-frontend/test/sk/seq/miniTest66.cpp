#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest66.h"
namespace ANONYMOUS{

void p1Sk(bool* x/* len = 5 */, bool& _out) {
  _out = (x[2]);
  return;
}
void spec(bool* x/* len = 5 */, bool& _out) {
  _out = (x[2]);
  return;
}

}
