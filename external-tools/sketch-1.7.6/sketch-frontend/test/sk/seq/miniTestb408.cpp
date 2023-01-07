#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb408.h"
namespace ANONYMOUS{

void main__Wrapper() {
  int  snapshot__ANONYMOUS_s8=0;
  int  p1__ANONYMOUS_s6=0;
  _main(p1__ANONYMOUS_s6, snapshot__ANONYMOUS_s8);
}
void main__WrapperNospec() {}
void _main(int& p1__ANONYMOUS_s1, int& snapshot__ANONYMOUS_s2) {
  p1__ANONYMOUS_s1 = 0;
  T1(p1__ANONYMOUS_s1);
  T1(p1__ANONYMOUS_s1);
  snapshot__ANONYMOUS_s2 = p1__ANONYMOUS_s1;
  runGen(5, p1__ANONYMOUS_s1, snapshot__ANONYMOUS_s2);
  runGen(5, p1__ANONYMOUS_s1, snapshot__ANONYMOUS_s2);
  runGen(5, p1__ANONYMOUS_s1, snapshot__ANONYMOUS_s2);
  print(snapshot__ANONYMOUS_s2 - p1__ANONYMOUS_s1);
}
void T1(int& p1__ANONYMOUS_s3) {
  p1__ANONYMOUS_s3 = p1__ANONYMOUS_s3 + 1;
  if ((p1__ANONYMOUS_s3) >= (5)) {
    p1__ANONYMOUS_s3 = 0;
  }
}
void runGen(int steps, int& p1__ANONYMOUS_s7, int& snapshot__ANONYMOUS_s9) {
  T2(p1__ANONYMOUS_s7);
  assert ((steps) > (0));;
  T1(p1__ANONYMOUS_s7);
  assert (((steps - 1)) != (5));;
  assert ((p1__ANONYMOUS_s7) == (snapshot__ANONYMOUS_s9));;
}
void T2(int& p1__ANONYMOUS_s0) {
  p1__ANONYMOUS_s0 = p1__ANONYMOUS_s0 - 1;
  if ((p1__ANONYMOUS_s0) < (0)) {
    p1__ANONYMOUS_s0 = 5;
  }
}
void print(int i) {assert(i==0);}

}
