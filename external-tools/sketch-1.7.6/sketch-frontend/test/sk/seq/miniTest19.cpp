#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest19.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool * _tt0= new bool [4]; 
  bool  _tt1[1] = {1};
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt0, 4, in, 4, _tt1, 1), 4, 4);
  delete[] _tt0;
  return;
}
void reverse(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool * _tt2= new bool [4]; 
  bool  _tt3[1] = {1};
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt2, 4, in, 4, _tt3, 1), 4, 4);
  delete[] _tt2;
  return;
}

}
