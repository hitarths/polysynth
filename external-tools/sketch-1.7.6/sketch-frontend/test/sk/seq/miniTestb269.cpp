#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb269.h"
namespace ANONYMOUS{

void main__Wrapper(int i, int N) {
  _main(i, N);
}
void main__WrapperNospec(int i, int N) {}
void _main(int i, int N) {
  int  x=0;
  if ((i) < (N)) {
    int _tt0[10] = {0, 1, 2, 3, 4, 5, 6, 0, 0, 0};
    int*  q= new int [10]; CopyArr<int >(q,_tt0, 10, 10);
    int*  T= new int [N]; CopyArr<int >(T,q, N, 10);
    x = (T[i]);
    assert ((x) == (i));;
    delete[] q;
    delete[] T;
  }
}

}
