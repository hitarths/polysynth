#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb369.h"
namespace ANONYMOUS{

void foo(int N, int* ar_0/* len = N */, int* _out/* len = N */) {
  int*  ar= new int [N]; CopyArr<int >(ar,ar_0, N, N);
  for (int  i=0;(i) < (N);i = i + 1){
    assert ((i) >= (0));;
    assert ((((ar[i]) * (ar[i]))) >= (0));;
    (ar[i]) = (ar[i]) + 1;
  }
  CopyArr<int >(_out,ar, N, N);
  delete[] ar;
  return;
}
void zzzz(int N, int* ar_0/* len = N */, int* _out/* len = N */) {
  int*  ar= new int [N]; CopyArr<int >(ar,ar_0, N, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (ar[i]) = (ar[i]) + 1;
  }
  CopyArr<int >(_out,ar, N, N);
  delete[] ar;
  return;
}

}
