#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb229.h"
namespace ANONYMOUS{

void _main(int x, int& _out) {
  _out = x;
  check1(x, x);
  checkEven(x * 2);
  return;
}
void spec(int x, int& _out) {
  _out = x;
  return;
}
void check1(int x, int ans) {
  assert ((ans) == (x));;
}
void checkEven(int x) {
  assert (((x % 2)) == (0));;
}

}
