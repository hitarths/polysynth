#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb308.h"
namespace ANONYMOUS{

void main__Wrapper(int x, int y, int* firstHalf/* len = 10 */, int* secondHalf/* len = 10 */) {
  _main(x, y, firstHalf, secondHalf);
}
void main__WrapperNospec(int x, int y, int* firstHalf/* len = 10 */, int* secondHalf/* len = 10 */) {}
void _main(int x, int y, int* firstHalf_0/* len = 10 */, int* secondHalf_1/* len = 10 */) {
  bool  xa_s53=(x) < (10);
  bool  xa=0;
  xa = xa_s53;
  if (xa_s53) {
    bool  xa_s53_0=(y) < (10);
    bool  xa_0=xa_s53_0;
    if (xa_s53_0) {
      int  _out_s67=(firstHalf_0[x]);
      int  _out_s67_0=(secondHalf_1[y]);
      xa_0 = (_out_s67) < (_out_s67_0);
    }
    xa = xa_0;
  }
  if (xa) {
    assert (((firstHalf_0[x])) < ((secondHalf_1[y])));;
  } else {
    assert ((((x) >= (10)) || ((y) >= (10))) || (((firstHalf_0[x])) >= ((secondHalf_1[y]))));;
  }
}

}
namespace generators{


}
