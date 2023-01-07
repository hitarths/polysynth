#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb209.h"
namespace ANONYMOUS{

void _main() {
  bool _tt0[5] = {0, 0, 0, 0, 0};
  bool _tt1[5] = {0, 1, 0, 1, 0};
  bool _tt2[5] = {0, 1, 0, 1, 0};
  bool*  t1= new bool [5]; CopyArr<bool >(t1,_tt0, 5, 5);
  bool*  t2= new bool [5]; CopyArr<bool >(t2,_tt1, 5, 5);
  bool*  t3= new bool [5]; CopyArr<bool >(t3,_tt2, 5, 5);
  bool _tt3[5] = {0, 0, 0, 0, 0};
  bool*  _out_s1= new bool [5]; CopyArr<bool >(_out_s1,_tt3, 5, 5);
  bool _tt4[5] = {0, 1, 0, 1, 0};
  f1(t2, _tt4, _out_s1);
  bool _tt5[5] = {0, 0, 0, 0, 0};
  bool*  _out_s3= new bool [5]; CopyArr<bool >(_out_s3,_tt5, 5, 5);
  bool _tt6[5] = {0, 0, 0, 0, 0};
  f1(t1, _tt6, _out_s3);
  bool * _tt7= new bool [5]; 
  bool*  b= new bool [5]; CopyArr<bool >(b,bitwise(logical_or<bool>(), _tt7, 5, _out_s1, 5, _out_s3, 5), 5, 5);
  for (int  i=0;(i) < (5);i = i + 1){
    assert (((t3[i])) == ((b[i])));;
  }
  delete[] t1;
  delete[] t2;
  delete[] t3;
  delete[] _out_s1;
  delete[] _out_s3;
  delete[] _tt7;
  delete[] b;
}
void VOID() {}
void f1(bool* in/* len = 5 */, bool* out/* len = 5 */, bool* _out/* len = 5 */) {
  bool _tt8[5] = {0, 0, 0, 0, 0};
  bool*  _out_s5= new bool [5]; CopyArr<bool >(_out_s5,_tt8, 5, 5);
  fc145(in, out, _out_s5);
  CopyArr<bool >(_out,_out_s5, 5, 5);
  delete[] _out_s5;
  return;
}
void fc145(bool* in/* len = 5 */, bool* out/* len = 5 */, bool* _out/* len = 5 */) {
  assert (!((in[1])) || (out[1]));;
  assert (!((in[3])) || (out[3]));;
  assert (!((out[0])));;
  assert (!((out[1])) || (in[1]));;
  assert (!((out[2])));;
  assert (!((out[3])) || (in[3]));;
  assert (!((out[4])));;
  CopyArr<bool >(_out,out, 5, 5);
  return;
}

}
