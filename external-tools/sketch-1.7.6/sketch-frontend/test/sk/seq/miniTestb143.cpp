#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb143.h"
namespace ANONYMOUS{

void sketch(int in_0, int& _out) {
  int  in=in_0;
  in = in_0 + 1;
  in = in * 2;
  in = in / 3;
  _out = in;
  return;
}
void spec(int in, int& _out) {
  _out = ((in + 1) * 2) / 3;
  return;
}

}
