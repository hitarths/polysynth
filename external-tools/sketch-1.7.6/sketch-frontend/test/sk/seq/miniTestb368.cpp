#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb368.h"
namespace ANONYMOUS{

void main__Wrapper(int N) {
  int  _out_s2=0;
  _main(N, _out_s2);
}
void main__WrapperNospec(int N) {}
void _main(int N, int& _out) {
  if ((N) < (2)) {
    _out = 0;
    return;
  }
  _out = 0;
  return;
}

}
