#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb196.h"
namespace ANONYMOUS{

void main_fun(int n_0) {
  int  n=n_0;
  if ((n_0) > (5)) {
    n = 5;
  }
  bool*  aa= new bool [7]; CopyArr<bool >(aa,0, 7);
  for (int  i=0;(i) < ((n - 0));i = i + 1){
    (aa[i]) = 1;
  }
  if ((n) > (0)) {
    assert (((aa[(n - 1)])) == (1));;
    assert (((aa[n])) == (0));;
  }
}
void VOID(int n) {}

}
