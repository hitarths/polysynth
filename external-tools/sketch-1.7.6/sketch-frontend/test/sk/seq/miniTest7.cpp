#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest7.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt0[4] = {0, 0, 1, 0};
  bool*  tmp1= new bool [4]; CopyArr<bool >(tmp1,_tt0, 4, 4);
  bool* _tt1= new bool [4]; 
  bool* _tt2= new bool [4]; 
  bool _tt3[4] = {1, 0, 1, 0};
  CopyArr<bool >(_out,SumArr(_tt1, 4, SumArr(_tt2, 4, in, 4, _tt3, 4), 4, tmp1, 4), 4, 4);
  delete[] tmp1;
  delete[] _tt1;
  delete[] _tt2;
  return;
}
void reverse(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt4[4] = {0, 1, 1, 0};
  bool*  tmp1= new bool [4]; CopyArr<bool >(tmp1,_tt4, 4, 4);
  bool _tt5[4] = {1, 1, 0, 0};
  bool*  tmp2= new bool [4]; CopyArr<bool >(tmp2,_tt5, 4, 4);
  bool* _tt6= new bool [4]; 
  bool* _tt7= new bool [4]; 
  CopyArr<bool >(_out,SumArr(_tt6, 4, SumArr(_tt7, 4, in, 4, tmp1, 4), 4, tmp2, 4), 4, 4);
  delete[] tmp1;
  delete[] tmp2;
  delete[] _tt6;
  delete[] _tt7;
  return;
}

}
