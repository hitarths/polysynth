#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb280.h"
namespace ANONYMOUS{

void main1__Wrapper(int x, int y) {
  main1(x, y);
}
void main1__WrapperNospec(int x, int y) {}
void main1(int x, int y) {
  int  t=0;
  if ((x) < (y)) {
    int  t_s1=0;
    foo(x, y, t_s1);
    t = t_s1;
    if ((x) > (1)) {
      t = t_s1 / 2;
    }
  }
  if ((t) < (3)) {
    int  t_s3=0;
    id(t, t_s3);
    t = t_s3 + t;
    int  t_s5=0;
    foo(x, y, t_s5);
    t = t + t_s5;
  }
  if ((t) < (5)) {
    int  t_s7=0;
    foo(x, y, t_s7);
    t = t + t_s7;
    if ((t) > (3)) {
      int  t_s9=0;
      foo(x, y, t_s9);
      t = t_s9;
    }
  }
  assert ((t) <= ((10 * (x + y))));;
}
void foo(int x, int y, int& _out) {
  _out = (x + y) / 2;
  return;
}
void id(int t, int& _out) {
  _out = 0;
  return;
}

}
