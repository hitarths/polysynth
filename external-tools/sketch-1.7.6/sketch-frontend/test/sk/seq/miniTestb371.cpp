#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb371.h"
namespace ANONYMOUS{

void foo__Wrapper(int N) {
  foo(N);
}
void foo__WrapperNospec(int N) {}
void foo(int N) {
  if ((N) > (0)) {
    int*  x= new int [N]; CopyArr<int >(x,0, N);
    if (((x[0])) > (0)) {
      (x[1]) = 0;
    }
    assert (((x[0])) == (0));;
    (x[0]) = 3;
    assert (((x[0])) == (3));;
  }
}

}
