#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb412.h"
namespace ANONYMOUS{

void Sk(char* a/* len = 4 */, bool& _out) {
  char _tt0[4] = {'a', 'b', 'c', 'd'};
  char*  tmp= new char [4]; CopyArr<char >(tmp,_tt0, 4, 4);
  _out = arrCompare(a, 4, tmp, 4) && ((4) == (4));
  delete[] tmp;
  return;
}
void foo(char* a/* len = 4 */, bool& _out) {
  char _tt1[4] = {'a', 'b', 'c', 'd'};
  char*  tmp= new char [4]; CopyArr<char >(tmp,_tt1, 4, 4);
  if (arrCompare(a, 4, tmp, 4) && ((4) == (4))) {
    _out = 1;
  delete[] tmp;
    return;
  } else {
    _out = 0;
  delete[] tmp;
    return;
  }
}

}
