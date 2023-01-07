#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb311.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  int  t=in + 1;
  int  x=t + 1;
  t = t - 1;
  assert ((x) == ((t + 2)));;
}

}
