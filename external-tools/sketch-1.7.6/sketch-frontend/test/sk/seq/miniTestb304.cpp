#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb304.h"
namespace ANONYMOUS{

void main__Wrapper(int in) {
  _main(in);
}
void main__WrapperNospec(int in) {}
void _main(int in) {
  assert (((in + 3)) == ((in + 3)));;
}

}
