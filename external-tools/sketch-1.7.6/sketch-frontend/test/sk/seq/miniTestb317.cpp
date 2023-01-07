#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb317.h"
namespace ANONYMOUS{

void main__Wrapper(int N, bool* ar/* len = N */) {
  _main(N, ar);
}
void main__WrapperNospec(int N, bool* ar/* len = N */) {}
void _main(int N, bool* ar/* len = N */) {
  bool*  out= new bool [N]; CopyArr<bool >(out,0, N);
  int  idx=0;
  for (int  i=0;(i) < (N);i = i + 1){
    int  uo_s0=idx;
    idx = idx + 1;
    (out[i]) = (ar[uo_s0]);
  }
  assert (arrCompare(out, N, ar, N) && ((N) == (N)));;
  delete[] out;
}

}
