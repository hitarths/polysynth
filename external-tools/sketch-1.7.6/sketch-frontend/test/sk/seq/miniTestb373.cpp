#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb373.h"
namespace ANONYMOUS{

void foo(int N, int* _out/* len = N */) {
  int*  B= new int [N]; CopyArr<int >(B,0, N);
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N / 2));i = i + 1){
    (B[i]) = i;
    (_out[i + (B[i])]) = i;
  }
  delete[] B;
  return;
}
void foosp(int N, int* _out/* len = N */) {
  CopyArr<int >(_out,0, N);
  for (int  i=0;(i) < ((N / 2));i = i + 1){
    (_out[i + i]) = i;
  }
  return;
}

}
