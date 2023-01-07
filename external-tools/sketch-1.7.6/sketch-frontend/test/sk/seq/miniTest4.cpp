#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest4.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  bool * _tt0= new bool [4]; CopyArr<bool >(_tt0,in, 4, 4); 
  bool*  tmp= new bool [4]; CopyArr<bool >(tmp,shR(_tt0, 4, 2), 4, 4);
  _out = (tmp[0]);
  delete[] _tt0;
  delete[] tmp;
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[2]);
  return;
}

}
