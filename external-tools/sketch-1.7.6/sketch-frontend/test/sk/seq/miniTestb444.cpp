#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb444.h"
namespace ANONYMOUS{

void main__Wrapper(int i, int j) {
  _main(i, j);
}
void main__WrapperNospec(int i, int j) {}
void _main(int i, int j) {
  float  ii=((float)(i));
  float  jj=((float)(j));
  if (((ii * jj)) < (10.0f)) {
    float  qq=0.0f;
    float  bnd=((float)(23));
    for (int  t=0;(t) < (j);t = t + 1){
      qq = qq + ii;
      assert ((qq) < (bnd));;
    }
  }
}

}
