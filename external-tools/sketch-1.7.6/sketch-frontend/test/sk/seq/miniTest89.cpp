#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest89.h"
namespace ANONYMOUS{

void test(int in1, int in2, int& _out) {
  _out = in1 + in2;
  return;
}
void spec(int in1, int in2, int& _out) {
  _out = in1 + in2;
  return;
}

}
