#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest80.h"
namespace ANONYMOUS{

void test(int in, bool& _out) {
  _out = (in) == (in);
  return;
}
void spec(int in, bool& _out) {
  _out = ((in - 1)) > ((in - 2));
  return;
}

}
