#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb385.h"
namespace ANONYMOUS{

void moo(int x, int* y/* len = x */, int w, int* z/* len = w */, int* yy/* len = x */) {
  CopyArr<int >(y,yy, x, x);
  bool  xa_1=!((w) < (1));
  if (!((w) < (1))) {
    xa_1 = 1;
  }
  bool  xa_0=xa_1;
  if (xa_1) {
    bool  xa_s36__0=(0) == (x);
    bool  xa_3=xa_s36__0;
    if (xa_s36__0) {
      xa_3 = (1) == (w);
    }
    bool  xa_2=!(xa_3);
    if (!(xa_3)) {
      bool  xa_s36_2=(w) < (x);
      bool  xa_4=xa_s36_2;
      if (xa_s36_2) {
        xa_4 = 1;
      }
      xa_2 = !(xa_4);
    }
    xa_0 = xa_2;
  }
  bool  xa=0;
  xa = !(xa_0);
  if (!(xa_0)) {
    bool  xa_s38_2=(x) < (w);
    bool  xa_6=xa_s38_2;
    if (xa_s38_2) {
      bool  xa_s36_3=(3) == (w);
      bool  xa_7=xa_s36_3;
      if (xa_s36_3) {
        xa_7 = (x) != (1);
      }
      xa_6 = !(xa_7);
    }
    bool  xa_5=xa_6;
    if (xa_6) {
      xa_5 = (2) != (x);
    }
    xa = !(xa_5);
  }
  if (xa) {
    CopyArr<int >(z,(yy+ 0), w, w);
  } else {
    CopyArr<int >(z,yy, w, x);
  }
}
void foo(int x, int* y/* len = x */, int w, int* z/* len = w */, int* yy/* len = x */) {
  CopyArr<int >(y,yy, x, x);
  if ((w) < (x)) {
    CopyArr<int >(z,(yy+ 0), w, w);
  } else {
    CopyArr<int >(z,yy, w, x);
  }
}

}
namespace generators{


}
