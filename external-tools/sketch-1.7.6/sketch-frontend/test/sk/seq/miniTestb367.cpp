#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb367.h"
namespace ANONYMOUS{

void pain(int N, int& _out) {
  _out = 7;
  for (int  i=0;(i) < (N);i = i + 1){
    _out = N;
  }
  return;
}
void pspec(int N, int& _out) {
  if ((N) == (0)) {
    _out = 7;
    return;
  } else {
    _out = N;
    return;
  }
}
void main__Wrapper(int N, int M) {
  _main(N, M);
}
void main__WrapperNospec(int N, int M) {}
void _main(int N, int M) {
  int  cnt=0;
  for (int  i=3;(i) < (N);i = i + 1){
    bool  vis=1;
    for (int  j=1;(j) < (i);j = j + 1){
      vis = 0;
    }
    if (vis) {
      cnt = cnt + 1;
    }
  }
  assert ((cnt) < (2));;
}

}
