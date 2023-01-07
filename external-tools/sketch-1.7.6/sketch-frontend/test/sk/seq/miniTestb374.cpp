#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb374.h"
namespace ANONYMOUS{

void tuu(int N, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N / 2));i = i + 1){
    int  _out_s1=0;
    foo(i, _out_s1);
    (_out[i + _out_s1]) = i;
  }
  return;
}
void foosp(int N, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N / 2));i = i + 1){
    (_out[i + i]) = i;
  }
  return;
}
void foo(int x, int& _out) {
  _out = x;
  return;
}

}
