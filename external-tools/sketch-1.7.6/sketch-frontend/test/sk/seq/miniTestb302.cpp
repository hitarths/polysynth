#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb302.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  assert ((5) == (((in + 5) - in)));;
  int  _out_s5=0;
  apply_foo1(_out_s5);
  assert ((_out_s5) == (((in + 3) - in)));;
  assert ((5) == (((in + 5) - in)));;
}
void apply_foo1(int& _out) {
  _out = 3;
  return;
}

}
