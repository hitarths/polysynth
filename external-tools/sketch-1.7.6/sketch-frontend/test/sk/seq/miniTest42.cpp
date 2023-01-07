#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest42.h"
namespace ANONYMOUS{

void mergeSort(bool* input_0/* len = 3 */, bool* _out/* len = 3 */) {
  bool*  input= new bool [3]; CopyArr<bool >(input,input_0, 3, 3);
  int  k=0;
  if ((input_0[0])) {
    k = 1;
  }
  k = k + 1;
  (input[k]) = 1;
  CopyArr<bool >(_out,input, 3, 3);
  delete[] input;
  return;
}
void sort(bool* input_0/* len = 3 */, bool* _out/* len = 3 */) {
  bool*  input= new bool [3]; CopyArr<bool >(input,input_0, 3, 3);
  if ((input_0[0])) {
    (input[2]) = 1;
  } else {
    (input[1]) = 1;
  }
  CopyArr<bool >(_out,input, 3, 3);
  delete[] input;
  return;
}

}
