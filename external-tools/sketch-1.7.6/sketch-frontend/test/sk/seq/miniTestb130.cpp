#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb130.h"
namespace ANONYMOUS{

void sketch(int i, int& _out) {
  _out = 0;
  int  y=0;
  foo(_out, y, i, 5);
  return;
}
void spec(int i, int& _out) {
  _out = i;
  return;
}
void foo(int& a, int& b, int x1, int x2) {
  a = x1;
  return;
}

}
