#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb230.h"
namespace ANONYMOUS{

template<typename T_0>
Grid* Grid::create(T_0* data_, int data_len){
  int tlen_data = 5 * 5; 
  void* temp= malloc( sizeof(Grid)   + sizeof(int )*tlen_data); 
  Grid* rv = new (temp)Grid();
  CopyArr(rv->data, data_, tlen_data, data_len ); 
  return rv;
}
void _main(int* A1/* len = 5 */, bool& _out, int* grammar__ANONYMOUS_s15/* len = 6 */) {
  bool  _out_s1=0;
  det_F(A1, _out_s1, grammar__ANONYMOUS_s15);
  _out = _out_s1;
  return;
}
void spec(int* A1/* len = 5 */, bool& _out, int* grammar__ANONYMOUS_s16/* len = 6 */) {
  bool  _out_s11=0;
  det_F(A1, _out_s11, grammar__ANONYMOUS_s16);
  _out = _out_s11;
  return;
}
void glblInit_grammar__ANONYMOUS_s18(int* grammar__ANONYMOUS_s17/* len = 6 */) {
  bool _tt0[6] = {0, 0, 1, 1, 1, 0};
  CopyArr<int >(grammar__ANONYMOUS_s17,_tt0, 6, 6);
}
void det_F(int* A1/* len = 5 */, bool& _out, int* grammar__ANONYMOUS_s14/* len = 6 */) {
  Grid*  g=Grid::create((int*)NULL, 0);
  for (int  a=0;(a) < (5);a = a + 1){
    for (int  b=0;(b) < (5);b = b + 1){
      assert (((a) >= (0)) && ((a) < (5)));;
      assert (((b) >= (0)) && ((b) < (5)));;
      (g->data[(5 * a) + b]) = 0;
    }
  }
  for (int  i=0;(i) < (5);i = i + 1){
    int  toPut=(A1[i]);
    putVal(i, i, toPut, g);
  }
  for (int  i_0=1;(i_0) < (5);i_0 = i_0 + 1){
    for (int  j=0;((j + i_0)) < (5);j = j + 1){
      det_activate(j, j + i_0, g, grammar__ANONYMOUS_s14);
    }
  }
  int  startSymbol_s3=0;
  getVal(0, 4, g, startSymbol_s3);
  if ((startSymbol_s3) != (3)) {
    _out = 1;
    return;
  } else {
    _out = 0;
    return;
  }
}
void putVal(int x, int y, int val, Grid* g) {
  assert (((x) >= (0)) && ((x) < (5)));;
  assert (((y) >= (0)) && ((y) < (5)));;
  (g->data[(5 * x) + y]) = val;
}
void det_activate(int x, int y, Grid* g, int* grammar__ANONYMOUS_s13/* len = 6 */) {
  int  aggre=3;
  for (int  i=x;(i) < (y);i = i + 1){
    int  first_s5=0;
    getVal(x, i, g, first_s5);
    int  second_s7=0;
    getVal(i + 1, y, g, second_s7);
    int  tryy_s9=0;
    getParent(first_s5, second_s7, tryy_s9, grammar__ANONYMOUS_s13);
    if ((tryy_s9) != (3)) {
      aggre = tryy_s9;
    }
  }
  putVal(x, y, aggre, g);
}
void getVal(int x, int y, Grid* g, int& _out) {
  assert (((x) >= (0)) && ((x) < (5)));;
  assert (((y) >= (0)) && ((y) < (5)));;
  _out = (g->data[(5 * x) + y]);
  return;
}
void getParent(int x, int y, int& _out, int* grammar__ANONYMOUS_s12/* len = 6 */) {
  if ((((grammar__ANONYMOUS_s12[1])) == (x)) && (((grammar__ANONYMOUS_s12[2])) == (y))) {
    _out = 0;
    return;
  } else {
    if ((((grammar__ANONYMOUS_s12[4])) == (x)) && (((grammar__ANONYMOUS_s12[5])) == (y))) {
      _out = 1;
      return;
    } else {
      _out = 3;
      return;
    }
  }
}

}
