#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb411.h"
namespace ANONYMOUS{

void Sk(char a, bool& _out) {
  _out = (a) == ('x');
  return;
}
void foo(char a, bool& _out) {
  if ((a) == ('x')) {
    _out = 1;
    return;
  } else {
    _out = 0;
    return;
  }
}

}
