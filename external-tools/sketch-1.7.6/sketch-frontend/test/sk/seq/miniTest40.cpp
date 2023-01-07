#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest40.h"
namespace ANONYMOUS{

void tiledTranspose(bool* input/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  (_out[0]) = (input[0]);
  (_out[1]) = (input[1]);
  (_out[2]) = (input[2]);
  (_out[3]) = (input[3]);
  return;
}
void transpose(bool* input/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  for (int  i=0;(i) < (4);i = i + 1){
    (_out[i]) = (input[i]);
  }
  return;
}

}
