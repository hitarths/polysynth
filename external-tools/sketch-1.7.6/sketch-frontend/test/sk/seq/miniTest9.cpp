#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest9.h"
namespace ANONYMOUS{

void reverseSketch(bool* in_0/* len = 4 */, bool& _out) {
  bool*  in= new bool [4]; CopyArr<bool >(in,in_0, 4, 4);
  bool * _tt0= new bool [4]; CopyArr<bool >(_tt0,in_0, 4, 4); 
  CopyArr<bool >(in,shL(_tt0, 4, 1), 4, 4);
  bool * _tt1= new bool [4]; CopyArr<bool >(_tt1,in, 4, 4); 
  CopyArr<bool >(in,shR(_tt1, 4, 1), 4, 4);
  bool * _tt2= new bool [4]; CopyArr<bool >(_tt2,in, 4, 4); 
  CopyArr<bool >(in,shL(_tt2, 4, 1), 4, 4);
  _out = (in[3]);
  delete[] in;
  delete[] _tt0;
  delete[] _tt1;
  delete[] _tt2;
  return;
}
void reverse(bool* in/* len = 4 */, bool& _out) {
  _out = (in[2]);
  return;
}

}
