#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb124.h"
namespace ANONYMOUS{

void sketch(int i, int& _out) {
  int  nv=0;
  if ((i) > (2)) {
    nv = i + 1;
    assert ((nv) > (i));;
  }
  _out = i;
  return;
}
void spec(int i, int& _out) {
  _out = i;
  return;
}

}
