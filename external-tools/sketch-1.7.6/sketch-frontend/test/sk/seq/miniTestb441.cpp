#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb441.h"
namespace ANONYMOUS{

void main__Wrapper(double i, double j) {
  _main(i, j);
}
void main__WrapperNospec(double i, double j) {}
void _main(double i, double j) {
  double  a=i * j;
  double  b=j * i;
  assert ((fabs(a + b-(b + a)) < 0.0001));;
}

}
