#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb106.h"
namespace ANONYMOUS{

void fooSK(int arr, bool org, bool& _out) {
  _out = ((3) == (arr)) && org;
  return;
}
void foo(int arr, bool org, bool& _out) {
  _out = ((3) == (arr)) && org;
  return;
}

}
