#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb112.h"
namespace ANONYMOUS{

void sketch(int in, int& _out) {
  _out = in + 1;
  _out = _out * 2;
  return;
}
void spec(int in, int& _out) {
  _out = in + 1;
  _out = _out * 2;
  return;
}

}
