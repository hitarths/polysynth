#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb166.h"
namespace ANONYMOUS{

void test(bool& _out) {
  bool*  fufu= new bool [5]; CopyArr<bool >(fufu,0, 5);
  (fufu[2]) = 1;
  _out = 1;
  delete[] fufu;
  return;
}
void one(bool& _out) {
  _out = 1;
  return;
}

}
