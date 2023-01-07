#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest49.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt0[4] = {1, 1, 0, 0};
  bool*  tmp= new bool [4]; CopyArr<bool >(tmp,_tt0, 4, 4);
  bool* _tt1= new bool [4]; 
  CopyArr<bool >(_out,SumArr(_tt1, 4, in, 4, tmp, 4), 4, 4);
  delete[] tmp;
  delete[] _tt1;
  return;
}
void reverse(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  int _tt2[16] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2};
  int*  tmp= new int [16]; CopyArr<int >(tmp,_tt2, 16, 16);
  int  v_0=(tmp[bvToInt(in, 4)]);
  bool*  _out_s1= new bool [4]; CopyArr<bool >(_out_s1,0, 4);
  int  v=v_0;
  for (int  i=0;(i) < (4);i = i + 1){
    (_out_s1[i]) = ((v % 2)) > (0);
    v = v / 2;
  }
  CopyArr<bool >(_out,_out_s1, 4, 4);
  delete[] tmp;
  delete[] _out_s1;
  return;
}

}
