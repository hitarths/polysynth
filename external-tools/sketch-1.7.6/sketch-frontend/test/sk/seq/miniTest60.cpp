#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest60.h"
namespace ANONYMOUS{

void test2(bool x, bool& _out) {
  bool _tt0[9] = {0, 0, 0, 1, 0, 0, 0, 1, 0};
  bool*  b= new bool [9]; CopyArr<bool >(b,_tt0, 9, 9);
  (b[2]) = 1;
  bool _tt1[4] = {0, 0, 0, 1};
  bool*  c= new bool [4]; CopyArr<bool >(c,_tt1, 4, 4);
  bool*  m1= new bool [5]; CopyArr<bool >(m1,0, 5);
  bool*  m2= new bool [5]; CopyArr<bool >(m2,0, 5);
  bool _tt2[5] = {0, 0, 0, 1, 1};
  bool*  t2= new bool [5]; CopyArr<bool >(t2,_tt2, 5, 5);
  CopyArr<bool >((m1+ 0),(b+ 0), 4, 4);
  CopyArr<bool >((m2+ 0),0, 4);
  bool* _tt3= new bool [5]; 
  CopyArr<bool >(m1,SumArr(_tt3, 5, m1, 5, t2, 5), 5, 5);
  bool * _tt4= new bool [5]; CopyArr<bool >(_tt4,m1, 5, 5); 
  CopyArr<bool >(m1,shL(_tt4, 5, 2), 5, 5);
  if (!((m1[4]))) {
    bool * _tt5= new bool [5]; CopyArr<bool >(_tt5,m1, 5, 5); 
    CopyArr<bool >(m1,shL(_tt5, 5, 1), 5, 5);
    delete[] _tt5;
  }
  bool*  _out_s1= new bool [4]; CopyArr<bool >(_out_s1,(m1+ 1), 4, 4);
  bool  _out_s3=1;
  for (int  i=0;(i) < (4);i = i + 1){
    if (((_out_s1[i])) != ((c[i]))) {
      _out_s3 = 0;
    }
  }
  _out = _out_s3;
  delete[] b;
  delete[] c;
  delete[] m1;
  delete[] m2;
  delete[] t2;
  delete[] _tt3;
  delete[] _tt4;
  delete[] _out_s1;
  return;
}
void alwaysOne(bool x, bool& _out) {
  _out = 1;
  return;
}

}
