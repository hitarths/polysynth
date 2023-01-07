#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest84.h"
namespace ANONYMOUS{

void count_sk(bool* a_0/* len = 4 */, int& _out) {
  bool*  a= new bool [4]; CopyArr<bool >(a,a_0, 4, 4);
  bool _tt0[2] = {0, 0};
  int*  ss= new int [2]; CopyArr<int >(ss,_tt0, 2, 2);
  CopyArr<int >((ss+ 0),0, 2);
  bool _tt1[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  bool*  mm= new bool [8]; CopyArr<bool >(mm,_tt1, 8, 8);
  CopyArr<bool >((mm+ 0),0, 8);
  bool _tt2[4] = {0, 0, 0, 0};
  bool*  m= new bool [4]; CopyArr<bool >(m,_tt2, 4, 4);
  (m[0]) = 1;
  (m[1]) = 1;
  (m[2]) = 0;
  (m[3]) = 0;
  CopyArr<bool >((mm+ 0),m, 4, 4);
  (ss[0]) = 2;
  bool * _tt3= new bool [4]; 
  bool * _tt4= new bool [4]; CopyArr<bool >(_tt4,m, 4, 4); 
  CopyArr<bool >(m,bitwise(not_equal_to<bool>(), _tt3, 4, m, 4, shL(_tt4, 4, 1), 4), 4, 4);
  CopyArr<bool >((mm+ 4),m, 4, 4);
  (ss[1]) = 1;
  CopyArr<bool >(m,(mm+ 4), 4, 4);
  bool* _tt5= new bool [4]; 
  bool * _tt6= new bool [4]; 
  bool * _tt7= new bool [4]; 
  bool * _tt8= new bool [4]; CopyArr<bool >(_tt8,a_0, 4, 4); 
  CopyArr<bool >(a,SumArr(_tt5, 4, bitwise(logical_and<bool>(), _tt6, 4, a_0, 4, m, 4), 4, bitwise(logical_and<bool>(), _tt7, 4, shR(_tt8, 4, 1), 4, m, 4), 4), 4, 4);
  CopyArr<bool >(m,(mm+ 0), 4, 4);
  bool* _tt9= new bool [4]; 
  bool * _tt10= new bool [4]; 
  bool * _tt11= new bool [4]; 
  bool * _tt12= new bool [4]; CopyArr<bool >(_tt12,a, 4, 4); 
  CopyArr<bool >(a,SumArr(_tt9, 4, bitwise(logical_and<bool>(), _tt10, 4, a, 4, m, 4), 4, bitwise(logical_and<bool>(), _tt11, 4, shR(_tt12, 4, 2), 4, m, 4), 4), 4, 4);
  _out = bvToInt(a, 4);
  delete[] a;
  delete[] ss;
  delete[] mm;
  delete[] m;
  delete[] _tt3;
  delete[] _tt4;
  delete[] _tt5;
  delete[] _tt6;
  delete[] _tt7;
  delete[] _tt8;
  delete[] _tt9;
  delete[] _tt10;
  delete[] _tt11;
  delete[] _tt12;
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
