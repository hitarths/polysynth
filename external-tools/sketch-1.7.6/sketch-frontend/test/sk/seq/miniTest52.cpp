#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest52.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 8 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  bool _tt0[64] = {0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0};
  bool*  Ta= new bool [64]; CopyArr<bool >(Ta,_tt0, 64, 64);
  bool _tt1[64] = {1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0};
  bool*  Tb= new bool [64]; CopyArr<bool >(Tb,_tt1, 64, 64);
  bool*  a= new bool [4]; CopyArr<bool >(a,0, 4);
  bool*  b= new bool [4]; CopyArr<bool >(b,0, 4);
  CopyArr<bool >(b,0, 4);
  for (int  i=0;(i) < (4);i = i + 1){
    (a[i]) = (in[i]);
    (b[i]) = (in[4 + i]);
  }
  int  inva=bvToInt(a, 4);
  int  invb=bvToInt(b, 4);
  for (int  i_0=0;(i_0) < (4);i_0 = i_0 + 1){
    (_out[i_0]) = (Ta[((inva * 4) + i_0)]) ^ (Tb[((invb * 4) + i_0)]);
  }
  delete[] Ta;
  delete[] Tb;
  delete[] a;
  delete[] b;
  return;
}
void reverse(bool* in/* len = 8 */, bool* _out/* len = 4 */) {
  int _tt2[16] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2};
  int*  tmp= new int [16]; CopyArr<int >(tmp,_tt2, 16, 16);
  bool*  a= new bool [4]; CopyArr<bool >(a,0, 4);
  bool*  b= new bool [4]; CopyArr<bool >(b,0, 4);
  CopyArr<bool >(b,0, 4);
  for (int  i=0;(i) < (4);i = i + 1){
    (a[i]) = (in[i]);
    (b[i]) = (in[4 + i]);
  }
  int  v_0=(tmp[bvToInt(a, 4)]);
  bool*  out_s1= new bool [4]; CopyArr<bool >(out_s1,0, 4);
  int  v=v_0;
  for (int  i_0=0;(i_0) < (4);i_0 = i_0 + 1){
    (out_s1[i_0]) = ((v % 2)) > (0);
    v = v / 2;
  }
  int  v_0_0=(tmp[bvToInt(b, 4)]);
  bool*  _out_s3= new bool [4]; CopyArr<bool >(_out_s3,0, 4);
  int  v_0_1=v_0_0;
  for (int  i_1=0;(i_1) < (4);i_1 = i_1 + 1){
    (_out_s3[i_1]) = ((v_0_1 % 2)) > (0);
    v_0_1 = v_0_1 / 2;
  }
  bool * _tt3= new bool [4]; 
  bool * _tt4= new bool [4]; CopyArr<bool >(_tt4,out_s1, 4, 4); 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt3, 4, shL(_tt4, 4, 1), 4, _out_s3, 4), 4, 4);
  delete[] tmp;
  delete[] a;
  delete[] b;
  delete[] out_s1;
  delete[] _out_s3;
  delete[] _tt3;
  delete[] _tt4;
  return;
}

}
