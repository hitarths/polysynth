#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb120.h"
namespace ANONYMOUS{

void SKrouter(int dest_port, int& _out) {
  if ((dest_port) == (22)) {
    _out = 1;
    return;
  }
  _out = 0;
  return;
}
void router(int dest_port, int& _out) {
  if ((dest_port) == (22)) {
    _out = 1;
    return;
  }
  _out = 0;
  return;
}

}
