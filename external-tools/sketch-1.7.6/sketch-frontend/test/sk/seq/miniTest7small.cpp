#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest7small.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 2 */, bool* _out/* len = 2 */) {
  bool _tt0[2] = {1, 0};
  bool*  tmp1= new bool [2]; CopyArr<bool >(tmp1,_tt0, 2, 2);
  bool* _tt1= new bool [2]; 
  bool * _tt2= new bool [2]; 
  bool _tt3[2] = {1, 1};
  CopyArr<bool >(_out,SumArr(_tt1, 2, in, 2, bitwise(not_equal_to<bool>(), _tt2, 2, _tt3, 2, tmp1, 2), 2), 2, 2);
  delete[] tmp1;
  delete[] _tt1;
  delete[] _tt2;
  return;
}
void reverse(bool* in/* len = 2 */, bool* _out/* len = 2 */) {
  bool _tt4[2] = {1, 0};
  bool*  tmp1= new bool [2]; CopyArr<bool >(tmp1,_tt4, 2, 2);
  bool _tt5[2] = {1, 1};
  bool*  tmp2= new bool [2]; CopyArr<bool >(tmp2,_tt5, 2, 2);
  bool* _tt6= new bool [2]; 
  bool * _tt7= new bool [2]; 
  CopyArr<bool >(_out,SumArr(_tt6, 2, in, 2, bitwise(not_equal_to<bool>(), _tt7, 2, tmp1, 2, tmp2, 2), 2), 2, 2);
  delete[] tmp1;
  delete[] tmp2;
  delete[] _tt6;
  delete[] _tt7;
  return;
}

}
