#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb138.h"
namespace ANONYMOUS{

void sk(int i, int& _out) {
  for (int  t=0;(t) < (5);t = t + 1){
    if ((i) == (t)) {
      assert ((i) == (t));;
    }
  }
  _out = i - 5;
  for (int  j=0;(j) < (5);j = j + 1){
    _out = _out + 1;
  }
  return;
}
void test(int i, int& _out) {
  _out = i;
  return;
}

}
