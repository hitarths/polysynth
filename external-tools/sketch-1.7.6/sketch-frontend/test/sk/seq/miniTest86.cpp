#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest86.h"
namespace ANONYMOUS{

void count_sk(bool* a_0/* len = 4 */, int& _out) {
  bool*  a= new bool [4]; CopyArr<bool >(a,a_0, 4, 4);
  bool _tt0[4] = {0, 0, 0, 0};
  bool*  m= new bool [4]; CopyArr<bool >(m,_tt0, 4, 4);
  CopyArr<bool >((m+ 0),0, 4);
  bool _tt1[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  bool*  mm= new bool [8]; CopyArr<bool >(mm,_tt1, 8, 8);
  (mm[0]) = 1;
  (mm[1]) = 1;
  (mm[2]) = 0;
  (mm[3]) = 0;
  (mm[4]) = 1;
  (mm[5]) = 0;
  (mm[6]) = 1;
  (mm[7]) = 0;
  CopyArr<bool >(m,(mm+ 4), 4, 4);
  bool* _tt2= new bool [4]; 
  bool * _tt3= new bool [4]; 
  bool * _tt4= new bool [4]; 
  bool * _tt5= new bool [4]; CopyArr<bool >(_tt5,a_0, 4, 4); 
  CopyArr<bool >(a,SumArr(_tt2, 4, bitwise(logical_and<bool>(), _tt3, 4, a_0, 4, m, 4), 4, bitwise(logical_and<bool>(), _tt4, 4, shR(_tt5, 4, 1), 4, m, 4), 4), 4, 4);
  CopyArr<bool >(m,(mm+ 0), 4, 4);
  bool* _tt6= new bool [4]; 
  bool * _tt7= new bool [4]; 
  bool * _tt8= new bool [4]; 
  bool * _tt9= new bool [4]; CopyArr<bool >(_tt9,a, 4, 4); 
  CopyArr<bool >(a,SumArr(_tt6, 4, bitwise(logical_and<bool>(), _tt7, 4, a, 4, m, 4), 4, bitwise(logical_and<bool>(), _tt8, 4, shR(_tt9, 4, 2), 4, m, 4), 4), 4, 4);
  _out = bvToInt(a, 4);
  delete[] a;
  delete[] m;
  delete[] mm;
  delete[] _tt2;
  delete[] _tt3;
  delete[] _tt4;
  delete[] _tt5;
  delete[] _tt6;
  delete[] _tt7;
  delete[] _tt8;
  delete[] _tt9;
  return;
}
void count(bool* a/* len = 4 */, int& _out) {
  _out = 0;
  for (int  i=0;(i) < (4);i = i + 1){
    if ((a[i])) {
      _out = _out + 1;
    }
  }
  return;
}

}
