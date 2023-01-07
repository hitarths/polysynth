#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb434.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int q) {
  _main(n, q);
}
void main__WrapperNospec(int n, int q) {}
void _main(int n, int q) {
  bool _tt0[6] = {0, 0, 0, 0, 0, 0};
  int*  x_s2= new int [6]; CopyArr<int >(x_s2,_tt0, 6, 6);
  foo(n, x_s2);
  bool _tt1[6] = {0, 0, 0, 0, 0, 0};
  int*  y_s4= new int [6]; CopyArr<int >(y_s4,_tt1, 6, 6);
  foo(q, y_s4);
  if ((n) == (q)) {
    assert (arrCompare(x_s2, 6, y_s4, 6) && ((6) == (6)));;
  }
  if (((n) > (3)) && ((q) > (3))) {
    if ((n) == (q)) {
      assert (((x_s2[2])) == ((y_s4[2])));;
    }
  }
}
void foo(int n, int* _out/* len = 6 */) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	CopyArr<int >(_out,0, 6);

}

}
