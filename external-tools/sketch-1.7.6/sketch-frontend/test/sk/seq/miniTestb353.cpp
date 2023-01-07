#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb353.h"
namespace ANONYMOUS{

void myfile__Wrapper(int* tt/* len = 5 */) {
  myfile(tt);
}
void myfile__WrapperNospec(int* tt/* len = 5 */) {}
void myfile(int* tt/* len = 5 */) {
  foo();
  moo();
  int  t=3;
  too(t);
  assert ((t) == (15));;
  int  _out_s1=0;
  sel(tt, t, _out_s1);
  assert ((_out_s1) == ((tt[2])));;
  assert ((t) == (9));;
}
void foo() {}
void moo() {}
void too(int& x) {
  x = 15;
}
void sel(int* t/* len = 5 */, int& x, int& _out) {
  x = 9;
  _out = (t[2]);
  return;
}

}
