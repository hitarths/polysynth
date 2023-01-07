#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb172.h"
namespace ANONYMOUS{

void ta(bool* i/* len = 5 */, int t, bool& _out) {
  _out = ((t) < (5)) && (i[t]);
  return;
}
void tt(bool* i/* len = 5 */, int t, bool& _out) {
  if ((t) >= (5)) {
    _out = 0;
    return;
  } else {
    _out = (i[t]);
    return;
  }
}

}
