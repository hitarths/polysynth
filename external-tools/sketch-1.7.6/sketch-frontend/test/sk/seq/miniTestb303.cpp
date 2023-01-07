#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb303.h"
namespace ANONYMOUS{

void main2__Wrapper(int in) {
  main2(in);
}
void main2__WrapperNospec(int in) {}
void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void main2(int in) {
  assert ((3) == (((in + 3) - in)));;
}
void _main(int in) {
  int  _out_s9=0;
  apply_moo5_foo4(_out_s9);
  assert ((_out_s9) == (((in + 3) - in)));;
}
void apply_moo5_foo4(int& _out) {
  _out = 3;
  return;
}

}
