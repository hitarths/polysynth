#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest69.h"
namespace ANONYMOUS{

void miniTest69sk(bool* in/* len = 64 */, bool* _out/* len = 64 */) {
  CopyArr<bool >(_out,0, 64);
  CopyArr<bool >((_out+ 0),(in+ 0), 63, 63);
  return;
}
void miniTest69(bool* in/* len = 64 */, bool* _out/* len = 64 */) {
  CopyArr<bool >(_out,0, 64);
  for (int  i=0;(i) < (63);i = i + 1){
    (_out[i]) = (in[i]);
  }
  return;
}

}
