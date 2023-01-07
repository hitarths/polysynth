#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest70.h"
namespace ANONYMOUS{

void miniTest69sk(bool* in/* len = 128 */, bool* _out/* len = 128 */) {
  CopyArr<bool >(_out,0, 128);
  CopyArr<bool >((_out+ 0),in, 127, 128);
  return;
}
void miniTest69(bool* in/* len = 128 */, bool* _out/* len = 128 */) {
  CopyArr<bool >(_out,0, 128);
  for (int  i=0;(i) < (127);i = i + 1){
    (_out[i]) = (in[i]);
  }
  return;
}

}
