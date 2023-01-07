#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb161.h"
namespace ANONYMOUS{

void test(int a, int b, int c, int& _out) {
  _out = ((a % 5) + (b % 5)) % 8;
  return;
}
void spec(int a, int b, int c, int& _out) {
  int  y=b % 5;
  int  z=((a % 5) + (y % 5)) + (y / 5);
  z = z % 8;
  _out = z % 8;
  return;
}

}
