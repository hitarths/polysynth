#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest62.h"
namespace ANONYMOUS{

void test2(bool x, bool& _out) {
  bool*  a_s1= new bool [7]; CopyArr<bool >(a_s1,0, 7);
  (a_s1[5]) = 1;
  (a_s1[3]) = 1;
  bool*  a= new bool [7]; CopyArr<bool >(a,0, 7);
  CopyArr<bool >(a,a_s1, 7, 7);
  (a[4]) = 1;
  (a[6]) = 1;
  bool*  b_s3= new bool [7]; CopyArr<bool >(b_s3,0, 7);
  (b_s3[5]) = 1;
  (b_s3[3]) = 1;
  bool*  b= new bool [7]; CopyArr<bool >(b,0, 7);
  CopyArr<bool >(b,b_s3, 7, 7);
  (b[5]) = 1;
  (b[6]) = 0;
  bool*  c_s5= new bool [7]; CopyArr<bool >(c_s5,0, 7);
  (c_s5[5]) = 1;
  (c_s5[3]) = 1;
  bool*  c= new bool [7]; CopyArr<bool >(c,0, 7);
  CopyArr<bool >(c,c_s5, 7, 7);
  (c[6]) = 1;
  bool*  ret_s13= new bool [7]; CopyArr<bool >(ret_s13,0, 7);
  bool*  one= new bool [2]; CopyArr<bool >(one,0, 2);
  (one[0]) = 1;
  bool*  minusone= new bool [2]; CopyArr<bool >(minusone,0, 2);
  for (int  i=0;(i) < (2);i = i + 1){
    (minusone[i]) = 1;
  }
  bool*  e1= new bool [2]; CopyArr<bool >(e1,(a+ 4), 2, 2);
  bool*  e2= new bool [2]; CopyArr<bool >(e2,(b+ 4), 2, 2);
  bool*  ret_s19= new bool [2]; CopyArr<bool >(ret_s19,0, 2);
  for (int  i_0=0;(i_0) < (2);i_0 = i_0 + 1){
    (ret_s19[i_0]) = !((e2[i_0]));
  }
  bool*  ret= new bool [2]; CopyArr<bool >(ret,0, 2);
  bool* _tt0= new bool [2]; 
  CopyArr<bool >(ret,SumArr(_tt0, 2, ret_s19, 2, e1, 2), 2, 2);
  bool*  one_0= new bool [2]; CopyArr<bool >(one_0,0, 2);
  (one_0[0]) = 1;
  bool* _tt1= new bool [2]; 
  bool*  edif_s15= new bool [2]; CopyArr<bool >(edif_s15,SumArr(_tt1, 2, ret, 2, one_0, 2), 2, 2);
  int  sh=0;
  if ((edif_s15[0])) {
    sh = 1;
  }
  if ((edif_s15[1])) {
    sh = sh + 2;
  }
  bool*  m1= new bool [5]; CopyArr<bool >(m1,0, 5);
  bool*  m2= new bool [5]; CopyArr<bool >(m2,0, 5);
  CopyArr<bool >((m1+ 0),(a+ 0), 4, 4);
  CopyArr<bool >((m2+ 0),(b+ 0), 4, 4);
  bool * _tt2= new bool [5]; CopyArr<bool >(_tt2,m2, 5, 5); 
  CopyArr<bool >(m2,shR(_tt2, 5, sh), 5, 5);
  bool _tt3[5] = {0, 0, 0, 0, 0};
  bool*  ret_0= new bool [5]; CopyArr<bool >(ret_0,_tt3, 5, 5);
  for (int  i_1=0;(i_1) < (5);i_1 = i_1 + 1){
    (ret_0[i_1]) = !((m2[i_1]));
  }
  bool*  one_1= new bool [5]; CopyArr<bool >(one_1,0, 5);
  (one_1[0]) = 1;
  bool* _tt4= new bool [5]; 
  bool* _tt5= new bool [5]; 
  CopyArr<bool >(m1,SumArr(_tt4, 5, m1, 5, SumArr(_tt5, 5, ret_0, 5, one_1, 5), 5), 5, 5);
  if (!((m1[3]))) {
    bool* _tt6= new bool [2]; 
    CopyArr<bool >(e1,SumArr(_tt6, 2, e1, 2, minusone, 2), 2, 2);
    delete[] _tt6;
  }
  CopyArr<bool >((ret_s13+ 4),e1, 2, 2);
  bool  _out_s9=1;
  for (int  i_2=4;(i_2) < (6);i_2 = i_2 + 1){
    if (((ret_s13[i_2])) != ((c[i_2]))) {
      _out_s9 = 0;
    }
  }
  _out = _out_s9;
  delete[] a_s1;
  delete[] a;
  delete[] b_s3;
  delete[] b;
  delete[] c_s5;
  delete[] c;
  delete[] ret_s13;
  delete[] one;
  delete[] minusone;
  delete[] e1;
  delete[] e2;
  delete[] ret_s19;
  delete[] ret;
  delete[] _tt0;
  delete[] one_0;
  delete[] _tt1;
  delete[] edif_s15;
  delete[] m1;
  delete[] m2;
  delete[] _tt2;
  delete[] ret_0;
  delete[] one_1;
  delete[] _tt4;
  delete[] _tt5;
  return;
}
void alwaysOne(bool x, bool& _out) {
  _out = 1;
  return;
}

}
