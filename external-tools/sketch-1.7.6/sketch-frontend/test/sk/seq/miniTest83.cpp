#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest83.h"
namespace ANONYMOUS{

void count_sk(bool* a_0/* len = 8 */, int& _out) {
  bool*  a= new bool [8]; CopyArr<bool >(a,a_0, 8, 8);
  bool _tt0[3] = {0, 0, 0};
  int*  ss= new int [3]; CopyArr<int >(ss,_tt0, 3, 3);
  CopyArr<int >((ss+ 0),0, 3);
  bool _tt1[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  bool*  mm= new bool [24]; CopyArr<bool >(mm,_tt1, 24, 24);
  CopyArr<bool >((mm+ 0),0, 24);
  bool _tt2[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  bool*  m= new bool [8]; CopyArr<bool >(m,_tt2, 8, 8);
  (m[0]) = 1;
  (m[1]) = 1;
  (m[2]) = 1;
  (m[3]) = 1;
  (m[4]) = 0;
  (m[5]) = 0;
  (m[6]) = 0;
  (m[7]) = 0;
  CopyArr<bool >((mm+ 0),m, 8, 8);
  (ss[0]) = 4;
  bool * _tt3= new bool [8]; 
  bool * _tt4= new bool [8]; CopyArr<bool >(_tt4,m, 8, 8); 
  CopyArr<bool >(m,bitwise(not_equal_to<bool>(), _tt3, 8, m, 8, shL(_tt4, 8, 2), 8), 8, 8);
  CopyArr<bool >((mm+ 8),m, 8, 8);
  (ss[1]) = 2;
  bool * _tt5= new bool [8]; 
  bool * _tt6= new bool [8]; CopyArr<bool >(_tt6,m, 8, 8); 
  CopyArr<bool >(m,bitwise(not_equal_to<bool>(), _tt5, 8, m, 8, shL(_tt6, 8, 1), 8), 8, 8);
  CopyArr<bool >((mm+ 16),m, 8, 8);
  (ss[2]) = 1;
  CopyArr<bool >(m,(mm+ 16), 8, 8);
  bool* _tt7= new bool [8]; 
  bool * _tt8= new bool [8]; 
  bool * _tt9= new bool [8]; 
  bool * _tt10= new bool [8]; CopyArr<bool >(_tt10,a_0, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt7, 8, bitwise(logical_and<bool>(), _tt8, 8, a_0, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt9, 8, shR(_tt10, 8, 1), 8, m, 8), 8), 8, 8);
  CopyArr<bool >(m,(mm+ 8), 8, 8);
  bool* _tt11= new bool [8]; 
  bool * _tt12= new bool [8]; 
  bool * _tt13= new bool [8]; 
  bool * _tt14= new bool [8]; CopyArr<bool >(_tt14,a, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt11, 8, bitwise(logical_and<bool>(), _tt12, 8, a, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt13, 8, shR(_tt14, 8, 2), 8, m, 8), 8), 8, 8);
  CopyArr<bool >(m,(mm+ 0), 8, 8);
  bool* _tt15= new bool [8]; 
  bool * _tt16= new bool [8]; 
  bool * _tt17= new bool [8]; 
  bool * _tt18= new bool [8]; CopyArr<bool >(_tt18,a, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt15, 8, bitwise(logical_and<bool>(), _tt16, 8, a, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt17, 8, shR(_tt18, 8, 4), 8, m, 8), 8), 8, 8);
  _out = bvToInt(a, 8);
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
  delete[] _tt13;
  delete[] _tt14;
  delete[] _tt15;
  delete[] _tt16;
  delete[] _tt17;
  delete[] _tt18;
  return;
}
void count(bool* a/* len = 8 */, int& _out) {
  _out = 0;
  for (int  i=0;(i) < (8);i = i + 1){
    if ((a[i])) {
      _out = _out + 1;
    }
  }
  return;
}

}
