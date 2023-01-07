#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest91.h"
namespace ANONYMOUS{

void first_sk(bool* x/* len = 4 */, bool* y/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,x, 4, 4);
  return;
}
void first(bool* x/* len = 4 */, bool* y/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,x, 4, 4);
  return;
}

}
