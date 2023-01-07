#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb420.h"
namespace Foo{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  bool _tt0[6] = {0, 0, 0, 0, 0, 0};
  int*  y_s1= new int [6]; CopyArr<int >(y_s1,_tt0, 6, 6);
  int _tt1[4] = {1, 2, 3, 4};
  int * _tt2= new int [6]; 
  CopyArr<int>(_tt2,_tt1, 6, 4);
  test(6, _tt2, y_s1);
  int*  y= new int [14]; CopyArr<int >(y,0, 14);
  CopyArr<int >(y,y_s1, 14, 6);
  for (int  i=0;(i) < (4);i = i + 1){
    assert (((y[i])) == ((i + 2)));;
  }
  delete[] y_s1;
  delete[] _tt2;
  delete[] y;
}
void test(int n, int* x/* len = n */, int* _out/* len = n */) {
  CopyArr<int >(_out,0, n);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = (x[i]) + 1;
  }
  return;
}

}
