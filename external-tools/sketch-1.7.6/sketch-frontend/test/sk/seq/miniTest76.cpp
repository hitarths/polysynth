#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest76.h"
namespace ANONYMOUS{

void test(int in, bool& _out) {
  _out = (in) == (in);
  return;
}
void spec(int in, bool& _out) {
  _out = (in) > ((in - 1));
  return;
}

}
