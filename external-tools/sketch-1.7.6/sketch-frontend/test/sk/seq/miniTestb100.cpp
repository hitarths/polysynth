#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb100.h"
namespace ANONYMOUS{

void foo(int i, bool j, int& _out) {
  int  x=-7;
  if (j) {
    x = -7 - j;
  }
  _out = x + i;
  return;
}
void boo(int i, bool j, int& _out) {
  int  x=0;
  if (j) {
    x = -8;
  } else {
    x = -7;
  }
  _out = i + x;
  return;
}

}
