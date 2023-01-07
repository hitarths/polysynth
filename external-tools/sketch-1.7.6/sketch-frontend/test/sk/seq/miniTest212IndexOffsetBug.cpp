#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest212IndexOffsetBug.h"
namespace ANONYMOUS{

void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  bool  _out_s1=0;
  f(1, 2, _out_s1);
  assert (_out_s1);;
}
void f(int pivot, int width, bool& _out) {
  int _tt0[1] = {2};
  int*  input= new int [1]; CopyArr<int >(input,_tt0, 1, 1);
  _out = ((input[((pivot - width) + 1)])) == (2);
  delete[] input;
  return;
}

}
