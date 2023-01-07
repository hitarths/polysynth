#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest3.h"
namespace ANONYMOUS{

void simple(bool* in/* len = 12 */, bool* _out/* len = 4 */) {
  bool  x=1;
  if ((in[0])) {
    x = 0;
  }
  CopyArr<bool >(_out,x, 4);
  return;
}
void simpler(bool* in/* len = 12 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,!((in[0])), 4);
  return;
}

}
