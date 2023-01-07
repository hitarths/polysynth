#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest18.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool& _out) {
  bool _tt0[5] = {0, 0, 1, 0, 1};
  bool*  tmp= new bool [5]; CopyArr<bool >(tmp,_tt0, 5, 5);
  bool * _tt1= new bool [5]; CopyArr<bool >(_tt1,tmp, 5, 5); 
  int  ttt=bvToInt(shR(_tt1, 5, 3), 5);
  assert ((ttt) < (4));;
  _out = (in[ttt]);
  delete[] tmp;
  delete[] _tt1;
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[2]);
  return;
}

}
