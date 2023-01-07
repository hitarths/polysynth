#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb375.h"
namespace ANONYMOUS{

void foo__Wrapper(int N, int* in/* len = N */, int i) {
  foo(N, in, i);
}
void foo__WrapperNospec(int N, int* in/* len = N */, int i) {}
void foo(int N, int* in/* len = N */, int i) {
  int  S=0;
  int*  tmp_s1= new int [N]; CopyArr<int >(tmp_s1,0, N);
  select_pred(N, in, S, tmp_s1);
  int*  sel= new int [S]; CopyArr<int >(sel,(tmp_s1+ 0), S, S);
  if ((i) < (S)) {
    assert (((sel[i])) > (3));;
  }
}
void select_pred(int N, int* A/* len = N */, int& sz, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  sz = 0;
  for (int  i=0;(i) < (N);i = i + 1){
    bool  _out_s3=0;
    pred((A[i]), _out_s3);
    if (_out_s3) {
      (_out[sz]) = (A[i]);
      sz = sz + 1;
    }
  }
  return;
}
void pred(int x, bool& _out) {
  _out = (x) > (6);
  return;
}

}
