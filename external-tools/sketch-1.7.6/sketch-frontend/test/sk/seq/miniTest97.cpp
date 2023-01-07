#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest97.h"
namespace ANONYMOUS{

void foo(int i, int& _out) {
  _out = -7 + i;
  return;
}
void boo(int i, int& _out) {
  _out = i - 7;
  return;
}

}
