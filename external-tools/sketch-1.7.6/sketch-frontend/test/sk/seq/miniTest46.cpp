#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest46.h"
namespace ANONYMOUS{

void mergeSort(bool* input/* len = 3 */, bool& _out) {
  _out = 1;
  int  k=0;
  if (!((input[0]))) {
    k = 1;
  }
  if (!((input[1]))) {
    if ((k) > (0)) {
      _out = 0;
    }
    k = k + 1;
  }
  if (!((input[2]))) {
    if (((k) > (0)) && ((k) < (2))) {
      _out = 0;
    }
  }
  return;
}
void sort(bool* input/* len = 3 */, bool& _out) {
  _out = 1;
  if (((input[0]) && (input[1])) && (input[2])) {
    _out = 1;
  }
  if ((((!((input[0])) && (input[1])) && (input[2])) || (((input[0]) && !((input[1]))) && (input[2]))) || (((input[0]) && (input[1])) && !((input[2])))) {
    _out = 1;
  }
  if (((((input[0]) && !((input[1]))) && !((input[2]))) || ((!((input[0])) && (input[1])) && !((input[2])))) || ((!((input[0])) && !((input[1]))) && (input[2]))) {
    _out = 0;
  }
  if ((!((input[0])) && !((input[1]))) && !((input[2]))) {
    _out = 0;
  }
  return;
}

}
