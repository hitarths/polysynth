#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb141.h"
namespace ANONYMOUS{

void foo(int i, int& _out) {
  if ((i) < ((i + 1))) {
    assert ((i) > ((i - 1)));;
    _out = i;
    return;
  }
  assert ((i) < ((i - 1)));;
  _out = i;
  return;
}
void spec(int i, int& _out) {
  _out = i;
  return;
}

}
