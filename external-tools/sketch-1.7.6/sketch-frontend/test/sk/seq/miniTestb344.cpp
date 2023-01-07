#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb344.h"
namespace ANONYMOUS{

void test__Wrapper(int N, int i) {
  test(N, i);
}
void test__WrapperNospec(int N, int i) {}
void test(int N, int i) {
  if ((6) < (N)) {
    int*  x= new int [N]; CopyArr<int >(x,0, N);
    (x[0]) = 25;
    (x[0]) = 11;
    assert ((0) == ((x[6])));;
    assert ((11) == ((x[0])));;
    if ((i) < (N)) {
      assert (((x[i])) != (25));;
    }
  }
}

}
