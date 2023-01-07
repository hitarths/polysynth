#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb350.h"
namespace ANONYMOUS{

void main__Wrapper(int n, int* in/* len = n */) {
  _main(n, in);
}
void main__WrapperNospec(int n, int* in/* len = n */) {}
void _main(int n, int* in/* len = n */) {
  int*  out_s1= new int [n + 1]; CopyArr<int >(out_s1,0, n + 1);
  addone(n, in, out_s1);
  delete[] out_s1;
}
void addone(int n, int* in/* len = n */, int* _out/* len = n + 1 */) {
  CopyArr<int >(_out,0, n + 1);
  for (int  i=0;(i) < (n);i = i + 1){
    (_out[i]) = (in[i]) + 1;
  }
  (_out[n]) = 1;
  return;
}

}
