#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb365.h"
namespace ANONYMOUS{

void avgGood(bool* x/* len = 5 */, bool* y/* len = 5 */, bool* _out/* len = 5 */) {
  if (((x[4])) == ((y[4]))) {
    bool _tt0[5] = {0, 0, 0, 0, 0};
    bool*  _out_s1= new bool [5]; CopyArr<bool >(_out_s1,_tt0, 5, 5);
    minus(5, x, _out_s1);
    bool _tt1[5] = {0, 0, 0, 0, 0};
    bool*  _out_s3= new bool [5]; CopyArr<bool >(_out_s3,_tt1, 5, 5);
    bool* _tt2= new bool [5]; 
    div2(5, SumArr(_tt2, 5, y, 5, _out_s1, 5), _out_s3);
    bool* _tt3= new bool [5]; 
    CopyArr<bool >(_out,SumArr(_tt3, 5, x, 5, _out_s3, 5), 5, 5);
    delete[] _out_s1;
    delete[] _out_s3;
    delete[] _tt2;
    delete[] _tt3;
    return;
  } else {
    bool _tt4[5] = {0, 0, 0, 0, 0};
    bool*  _out_s5= new bool [5]; CopyArr<bool >(_out_s5,_tt4, 5, 5);
    bool* _tt5= new bool [5]; 
    div2(5, SumArr(_tt5, 5, x, 5, y, 5), _out_s5);
    CopyArr<bool >(_out,_out_s5, 5, 5);
    delete[] _out_s5;
    delete[] _tt5;
    return;
  }
}
void avg(bool* x/* len = 5 */, bool* y/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  xx= new bool [10]; CopyArr<bool >(xx,x, 10, 5);
  bool*  yy= new bool [10]; CopyArr<bool >(yy,y, 10, 5);
  for (int  i=5;(i) < (10);i = i + 1){
    (xx[i]) = (xx[4]);
    (yy[i]) = (yy[4]);
  }
  bool* _tt7= new bool [10]; 
  bool * _tt6= new bool [10]; CopyArr<bool >(_tt6,SumArr(_tt7, 10, xx, 10, yy, 10), 10, 10); 
  bool*  r= new bool [10]; CopyArr<bool >(r,shR(_tt6, 10, 1), 10, 10);
  CopyArr<bool >(_out,(r+ 0), 5, 5);
  delete[] xx;
  delete[] yy;
  delete[] _tt6;
  delete[] _tt7;
  delete[] r;
  return;
}
void minus(int T, bool* x/* len = T */, bool* _out/* len = T */) {
  bool* _tt8= new bool [T]; 
  bool* _tt9= new bool [T]; 
  bool  _tt10[1] = {1};
  CopyArr<bool >(_out,SumArr(_tt8, T, bitneg(_tt9, T, x, T), T, _tt10, 1), T, T);
  delete[] _tt8;
  delete[] _tt9;
  return;
}
void div2(int T, bool* x/* len = T */, bool* _out/* len = T */) {
  bool * _tt11= new bool [T]; CopyArr<bool >(_tt11,x, T, T); 
  CopyArr<bool >(_out,shR(_tt11, T, 1), T, T);
  (_out[T - 1]) = (_out[T - 2]);
  delete[] _tt11;
  return;
}

}
