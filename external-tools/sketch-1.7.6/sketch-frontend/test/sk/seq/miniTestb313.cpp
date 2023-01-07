#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb313.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  int  _out_s3=0;
  foo(in, _out_s3);
  assert ((_out_s3) == (in));;
}
void foo(int in, int& _out) {
  _out = in;
  return;
}

}
