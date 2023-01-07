#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest94.h"
namespace ANONYMOUS{

void reverseSketch(bool* in1/* len = 5 */, bool* in2/* len = 5 */, bool* _out/* len = 5 */) {
  CopyArr<bool >(_out,in1, 5, 5);
  return;
}
void reverse(bool* in1/* len = 5 */, bool* in2/* len = 5 */, bool* _out/* len = 5 */) {
  CopyArr<bool >(_out,in1, 5, 5);
  return;
}

}
