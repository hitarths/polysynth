#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb333.h"
namespace ANONYMOUS{

void main2__Wrapper(int t0, int t1, int N, int i) {
  main2(t0, t1, N, i);
}
void main2__WrapperNospec(int t0, int t1, int N, int i) {}
void main2(int t0, int t1, int N, int i) {
  bool  q2=(t1) < (0);
  bool  q5=(t1) < (N);
  bool  q10=(t0) < (N);
  bool  q11=q10 & !(((t0) < (0)));
  bool  q12=q11 & (q5 & !(q2));
  assert (q10 | !(q12));;
  bool  q51=!((!(((q11 & !(q2)) & q5)) | (((i % 4)) == (2)))) & q12;
  assert (q10 | !(q51));;
  assert (q5 | !(q51));;
}

}
