#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest17.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool* _out/* len = 5 */) {
  CopyArr<bool >(_out,in, 5, 4);
  return;
}
void reverse(bool* in/* len = 4 */, bool* _out/* len = 5 */) {
  CopyArr<bool >(_out,0, 5);
  for (int  i=0;(i) < (4);i = i + 1){
    (_out[i]) = (in[i]);
  }
  return;
}

}
