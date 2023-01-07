#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest44.h"
namespace ANONYMOUS{

void mergeSort(bool* input/* len = 2 */, bool* _out/* len = 2 */) {
  bool _tt0[2] = {1, 1};
  CopyArr<bool >(_out,_tt0, 2, 2);
  int  k=0;
  for (int  i=0;(i) < (2);i = i + 1){
    if (!((input[i]))) {
      (_out[k]) = 0;
      k = k + 1;
    }
  }
  return;
}
void sort(bool* input/* len = 2 */, bool* _out/* len = 2 */) {
  bool _tt1[2] = {1, 1};
  CopyArr<bool >(_out,_tt1, 2, 2);
  if ((input[0]) && (input[1])) {
    (_out[0]) = 1;
    (_out[1]) = 1;
  }
  if (!((input[0])) && (input[1])) {
    (_out[0]) = 0;
    (_out[1]) = 1;
  }
  if ((input[0]) && !((input[1]))) {
    (_out[0]) = 0;
    (_out[1]) = 1;
  }
  if (!((input[0])) && !((input[1]))) {
    (_out[0]) = 0;
    (_out[1]) = 0;
  }
  return;
}

}
