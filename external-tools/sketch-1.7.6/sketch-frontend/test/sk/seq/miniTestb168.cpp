#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb168.h"
namespace ANONYMOUS{

void test(int in, bool& _out) {
  int  n=0;
  n = in;
  if ((in) == (in)) {
    n = in + 1;
  }
  assert ((n) == ((in + 1)));;
  _out = 1;
  return;
}
void ONE(int in, bool& _out) {
  _out = 1;
  return;
}

}
