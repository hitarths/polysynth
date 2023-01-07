#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb279.h"
namespace ANONYMOUS{

void main1__Wrapper(int x, int y) {
  main1(x, y);
}
void main1__WrapperNospec(int x, int y) {}
void main1(int x, int y) {
  int  t=0;
  int  v=x;
  if ((x) < (y)) {
    int  v_s1=0;
    foo(x, y, t, v_s1);
    v = v_s1;
    if ((v_s1) > (1)) {
      t = t / 2;
    }
  }
  if ((t) < (3)) {
    int  t_s3=0;
    id(t, t_s3);
    t = t_s3 + t;
  }
  if ((t) < (5)) {
    int  v_s5=0;
    int  q=0;
    foo(x, y, q, v_s5);
    v = v_s5;
    t = t + q;
  }
  assert ((t) <= ((v + y)));;
}
void foo(int x, int y, int& o1, int& _out) {
  o1 = (x + y) / 2;
  _out = x;
  return;
}
void id(int t, int& _out) {
  _out = 0;
  return;
}

}
