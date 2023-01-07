#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest213ArrExpScaling.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  bool _tt0[16] = {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int*  testArr= new int [16]; CopyArr<int >(testArr,_tt0, 16, 16);
  vectoradd(testArr);
  assert (((testArr[0])) == (1));;
  assert (((testArr[1])) == (2));;
  assert (((testArr[2])) == (1));;
  delete[] testArr;
}
void vectoradd(int* arr/* len = 16 */) {
  upstep(arr);
}
void upstep(int* arr/* len = 16 */) {
  int  delta_4=1;
  int  delta_4_0=1;
  bool _tt1[2] = {1, 1};
  bool*  C= new bool [2]; CopyArr<bool >(C,_tt1, 2, 2);
  bool  __sa0_s2=0;
  all(C, __sa0_s2);
  bool  __sa0=0;
  __sa0 = __sa0_s2;
  while (__sa0) {
    int  a_i_t1=delta_4 + -1;
    int  a_i_t2=(delta_4_0 * 3) + -1;
    int  b_i_t1=(delta_4 * 2) + -1;
    int  b_i_t2=(delta_4_0 * 4) + -1;
    assert ((a_i_t1) < (b_i_t1));;
    assert ((a_i_t2) < (b_i_t2));;
    if ((b_i_t1) < (10)) {
      (arr[b_i_t1]) = (arr[b_i_t1]) + (arr[a_i_t1]);
    }
    delta_4 = delta_4 * 2;
    (C[0]) = (delta_4) < (10);
    if ((b_i_t2) < (10)) {
      (arr[b_i_t2]) = (arr[b_i_t2]) + (arr[a_i_t2]);
    }
    delta_4_0 = delta_4_0 * 2;
    (C[1]) = (delta_4_0) < (10);
    bool  __sa0_s4=0;
    all(C, __sa0_s4);
    __sa0 = __sa0_s4;
  }
}
void all(bool* test/* len = 2 */, bool& _out) {
  _out = (test[0]) && (test[1]);
  return;
}

}
