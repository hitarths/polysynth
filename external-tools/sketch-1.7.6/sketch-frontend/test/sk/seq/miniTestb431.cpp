#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb431.h"
namespace ANONYMOUS{

void sk(int i, int j, int& _out) {
  int  t=i + j;
  int  f=t + 2;
  t = f - 1;
  _out = (t + f) - f;
  return;
}
void test(int i, int j, int& _out) {
  _out = (i + j) + 1;
  return;
}

}
