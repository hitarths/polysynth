#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb443.h"
namespace ANONYMOUS{

void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void _main(int i, int j) {
  float  ii=((float)(i));
  float  tt=ii * ((float)(j));
  if ((j) != (0)) {
    assert ((fabs(tt / ((float)(j))-(ii)) < 0.0001));;
  }
}

}
