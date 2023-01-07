#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb430.h"
namespace ANONYMOUS{

void Sk(int* a/* len = 4 */, bool& _out) {
  int _tt0[4] = {3, 7, 0, 1};
  int*  tmp= new int [4]; CopyArr<int >(tmp,_tt0, 4, 4);
  bool  _out_s1=0;
  char * _tt1= new char [4]; 
  CopyArr<char>(_tt1,a, 4, 4);
  char * _tt2= new char [4]; 
  CopyArr<char>(_tt2,tmp, 4, 4);
  StrEquals(4, _tt1, 4, _tt2, _out_s1);
  _out = _out_s1;
  delete[] tmp;
  delete[] _tt1;
  delete[] _tt2;
  return;
}
void foo(int* a/* len = 4 */, bool& _out) {
  int _tt3[3] = {3, 7, 0};
  int*  ab= new int [3]; CopyArr<int >(ab,_tt3, 3, 3);
  bool  _out_s3=0;
  char * _tt4= new char [4]; 
  CopyArr<char>(_tt4,a, 4, 4);
  char * _tt5= new char [3]; 
  CopyArr<char>(_tt5,ab, 3, 3);
  StrEquals(4, _tt4, 3, _tt5, _out_s3);
  _out = _out_s3;
  delete[] ab;
  delete[] _tt4;
  delete[] _tt5;
  return;
}
void StrEquals(int n1, char* c1/* len = n1 */, int n2, char* c2/* len = n2 */, bool& _out) {
  for (int  i=0;(i) < (n1);i = i + 1){
    if ((i) >= (n2)) {
      _out = 0;
      return;
    }
    if (((c1[i])) == (0)) {
      _out = ((c2[i])) == (0);
      return;
    }
    if (((c2[i])) != ((c1[i]))) {
      _out = 0;
      return;
    }
  }
  _out = 1;
  return;
}

}
