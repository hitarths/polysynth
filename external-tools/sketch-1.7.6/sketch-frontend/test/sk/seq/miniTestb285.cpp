#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb285.h"
namespace ANONYMOUS{

void main__Wrapper(int* force/* len = 12 */) {
  _main(force);
}
void main__WrapperNospec(int* force/* len = 12 */) {}
void _main(int* force/* len = 12 */) {
  assert ((((((((force[10]) + (force[9])) - (force[8])) + (force[11])) - (force[2])) - (force[5]))) == ((((((-((force[2])) - (force[5])) - (force[8])) + (force[9])) + (force[10])) + (force[11]))));;
}

}
