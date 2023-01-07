#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb105.h"
namespace ANONYMOUS{

void fooSK(int arr, bool org, bool& _out) {
  _out = ((1) == (arr)) && org;
  return;
}
void foo(int arr, bool org, bool& _out) {
  _out = ((1) == (arr)) && org;
  return;
}

}
