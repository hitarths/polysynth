#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb185.h"
namespace ANONYMOUS{

void zcafa(bool* i/* len = 5 */, bool* j/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  z= new bool [5]; CopyArr<bool >(z,0, 5);
  bool _tt0[5] = {0, 0, 0, 0, 0};
  bool*  _out_s1= new bool [5]; CopyArr<bool >(_out_s1,_tt0, 5, 5);
  test1(i, j, _out_s1);
  bool _tt1[5] = {0, 0, 0, 0, 0};
  bool*  _out_s3= new bool [5]; CopyArr<bool >(_out_s3,_tt1, 5, 5);
  test2(i, z, _out_s3);
  bool * _tt2= new bool [5]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt2, 5, _out_s1, 5, _out_s3, 5), 5, 5);
  delete[] z;
  delete[] _out_s1;
  delete[] _out_s3;
  delete[] _tt2;
  return;
}
void bafa(bool* i/* len = 5 */, bool* j/* len = 5 */, bool* _out/* len = 5 */) {
  CopyArr<bool >(_out,0, 5);
  (_out[0]) = (i[0]);
  (_out[1]) = (j[1]);
  (_out[2]) = (i[2]);
  return;
}
void tasa(bool* _out/* len = 5 */) {
  bool*  t0= new bool [5]; CopyArr<bool >(t0,0, 5);
  bool _tt3[5] = {1, 1, 1, 1, 1};
  bool*  t1= new bool [5]; CopyArr<bool >(t1,_tt3, 5, 5);
  bool _tt4[5] = {0, 0, 0, 0, 0};
  bool*  q_s5= new bool [5]; CopyArr<bool >(q_s5,_tt4, 5, 5);
  test2(t0, t1, q_s5);
  assert ((((q_s5[4])) == (0)) && (((q_s5[3])) == (0)));;
  CopyArr<bool >(_out,1, 5);
  delete[] t0;
  delete[] t1;
  delete[] q_s5;
  return;
}
void zONE(bool* _out/* len = 5 */) {
  CopyArr<bool >(_out,1, 5);
  return;
}
void fasa(bool* _out/* len = 5 */) {
  bool*  t0= new bool [5]; CopyArr<bool >(t0,0, 5);
  bool _tt5[5] = {1, 1, 1, 1, 1};
  bool*  t1= new bool [5]; CopyArr<bool >(t1,_tt5, 5, 5);
  bool _tt6[5] = {0, 0, 0, 0, 0};
  bool*  q_s7= new bool [5]; CopyArr<bool >(q_s7,_tt6, 5, 5);
  test1(t0, t1, q_s7);
  assert (((((q_s7[0])) == (0)) && (((q_s7[1])) == (1))) && (((q_s7[2])) == (0)));;
  CopyArr<bool >(_out,1, 5);
  delete[] t0;
  delete[] t1;
  delete[] q_s7;
  return;
}
void test1(bool* i/* len = 5 */, bool* j/* len = 5 */, bool* _out/* len = 5 */) {
  bool _tt7[5] = {1, 0, 1, 1, 1};
  bool*  m= new bool [5]; CopyArr<bool >(m,_tt7, 5, 5);
  bool * _tt8= new bool [5]; 
  bool * _tt9= new bool [5]; 
  bool * _tt10= new bool [5]; 
  bool* _tt11= new bool [5]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt8, 5, bitwise(logical_and<bool>(), _tt9, 5, i, 5, m, 5), 5, bitwise(logical_and<bool>(), _tt10, 5, j, 5, bitneg(_tt11, 5, m, 5), 5), 5), 5, 5);
  delete[] m;
  delete[] _tt8;
  delete[] _tt9;
  delete[] _tt10;
  delete[] _tt11;
  return;
}
void test2(bool* i/* len = 5 */, bool* j/* len = 5 */, bool* _out/* len = 5 */) {
  bool _tt12[5] = {0, 0, 0, 1, 1};
  bool*  m= new bool [5]; CopyArr<bool >(m,_tt12, 5, 5);
  bool * _tt13= new bool [5]; 
  bool * _tt14= new bool [5]; 
  bool * _tt15= new bool [5]; 
  bool* _tt16= new bool [5]; 
  CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt13, 5, bitwise(logical_and<bool>(), _tt14, 5, i, 5, m, 5), 5, bitwise(logical_and<bool>(), _tt15, 5, j, 5, bitneg(_tt16, 5, m, 5), 5), 5), 5, 5);
  delete[] m;
  delete[] _tt13;
  delete[] _tt14;
  delete[] _tt15;
  delete[] _tt16;
  return;
}

}
