#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest88.h"
namespace ANONYMOUS{

void count_sk(bool* a_0/* len = 8 */, int& _out) {
  bool*  a= new bool [8]; CopyArr<bool >(a,a_0, 8, 8);
  bool _tt0[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  int*  ss= new int [8]; CopyArr<int >(ss,_tt0, 8, 8);
  CopyArr<int >((ss+ 0),0, 8);
  bool _tt1[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  bool*  mm= new bool [64]; CopyArr<bool >(mm,_tt1, 64, 64);
  CopyArr<bool >((mm+ 0),0, 64);
  bool*  m_s11= new bool [8]; CopyArr<bool >(m_s11,0, 8);
  int  v=255;
  for (int  i=0;(i) < (8);i = i + 1){
    (m_s11[i]) = ((v % 2)) > (0);
    v = v / 2;
  }
  CopyArr<bool >((mm+ 0),m_s11, 8, 8);
  (ss[0]) = 16;
  bool*  m= new bool [8]; CopyArr<bool >(m,0, 8);
  bool * _tt2= new bool [8]; 
  bool * _tt3= new bool [8]; CopyArr<bool >(_tt3,m_s11, 8, 8); 
  CopyArr<bool >(m,bitwise(not_equal_to<bool>(), _tt2, 8, m_s11, 8, shL(_tt3, 8, 8), 8), 8, 8);
  CopyArr<bool >((mm+ 8),m, 8, 8);
  (ss[1]) = 8;
  bool * _tt4= new bool [8]; 
  bool * _tt5= new bool [8]; CopyArr<bool >(_tt5,m, 8, 8); 
  CopyArr<bool >(m,bitwise(not_equal_to<bool>(), _tt4, 8, m, 8, shL(_tt5, 8, 4), 8), 8, 8);
  CopyArr<bool >((mm+ 16),m, 8, 8);
  (ss[2]) = 4;
  bool * _tt6= new bool [8]; 
  bool * _tt7= new bool [8]; CopyArr<bool >(_tt7,m, 8, 8); 
  CopyArr<bool >(m,bitwise(not_equal_to<bool>(), _tt6, 8, m, 8, shL(_tt7, 8, 2), 8), 8, 8);
  CopyArr<bool >((mm+ 24),m, 8, 8);
  (ss[3]) = 2;
  bool * _tt8= new bool [8]; 
  bool * _tt9= new bool [8]; CopyArr<bool >(_tt9,m, 8, 8); 
  CopyArr<bool >(m,bitwise(not_equal_to<bool>(), _tt8, 8, m, 8, shL(_tt9, 8, 1), 8), 8, 8);
  CopyArr<bool >((mm+ 32),m, 8, 8);
  (ss[4]) = 1;
  CopyArr<bool >(m,(mm+ 32), 8, 8);
  bool* _tt10= new bool [8]; 
  bool * _tt11= new bool [8]; 
  bool * _tt12= new bool [8]; 
  bool * _tt13= new bool [8]; CopyArr<bool >(_tt13,a_0, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt10, 8, bitwise(logical_and<bool>(), _tt11, 8, a_0, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt12, 8, shR(_tt13, 8, 1), 8, m, 8), 8), 8, 8);
  CopyArr<bool >(m,(mm+ 24), 8, 8);
  bool* _tt14= new bool [8]; 
  bool * _tt15= new bool [8]; 
  bool * _tt16= new bool [8]; 
  bool * _tt17= new bool [8]; CopyArr<bool >(_tt17,a, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt14, 8, bitwise(logical_and<bool>(), _tt15, 8, a, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt16, 8, shR(_tt17, 8, 2), 8, m, 8), 8), 8, 8);
  CopyArr<bool >(m,(mm+ 16), 8, 8);
  bool* _tt18= new bool [8]; 
  bool * _tt19= new bool [8]; 
  bool * _tt20= new bool [8]; 
  bool * _tt21= new bool [8]; CopyArr<bool >(_tt21,a, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt18, 8, bitwise(logical_and<bool>(), _tt19, 8, a, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt20, 8, shR(_tt21, 8, 4), 8, m, 8), 8), 8, 8);
  CopyArr<bool >(m,(mm+ 8), 8, 8);
  bool* _tt22= new bool [8]; 
  bool * _tt23= new bool [8]; 
  bool * _tt24= new bool [8]; 
  bool * _tt25= new bool [8]; CopyArr<bool >(_tt25,a, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt22, 8, bitwise(logical_and<bool>(), _tt23, 8, a, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt24, 8, shR(_tt25, 8, 8), 8, m, 8), 8), 8, 8);
  CopyArr<bool >(m,(mm+ 0), 8, 8);
  bool* _tt26= new bool [8]; 
  bool * _tt27= new bool [8]; 
  bool * _tt28= new bool [8]; 
  bool * _tt29= new bool [8]; CopyArr<bool >(_tt29,a, 8, 8); 
  CopyArr<bool >(a,SumArr(_tt26, 8, bitwise(logical_and<bool>(), _tt27, 8, a, 8, m, 8), 8, bitwise(logical_and<bool>(), _tt28, 8, shR(_tt29, 8, 16), 8, m, 8), 8), 8, 8);
  _out = bvToInt(a, 8);
  delete[] a;
  delete[] ss;
  delete[] mm;
  delete[] m_s11;
  delete[] m;
  delete[] _tt2;
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
  delete[] _tt19;
  delete[] _tt20;
  delete[] _tt21;
  delete[] _tt22;
  delete[] _tt23;
  delete[] _tt24;
  delete[] _tt25;
  delete[] _tt26;
  delete[] _tt27;
  delete[] _tt28;
  delete[] _tt29;
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
