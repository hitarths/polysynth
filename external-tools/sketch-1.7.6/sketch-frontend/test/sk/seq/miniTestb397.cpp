#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb397.h"
namespace ANONYMOUS{

void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  printInt(x);
}
void printInt(int x) {printf("Input equals %d\n", x);}

}
