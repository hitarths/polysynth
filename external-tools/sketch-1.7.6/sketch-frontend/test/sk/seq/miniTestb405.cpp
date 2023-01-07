#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb405.h"
namespace ANONYMOUS{

template<typename T_0, typename T_1>
Array* Array::create(int  len_, T_0* A_, int A_len, T_1* B_, int B_len){
  int tlen_A = len_; 
  int tlen_B = 5; 
  void* temp= malloc( sizeof(Array)   + sizeof(int )*tlen_A + sizeof(bool )*tlen_B); 
  Array* rv = new (temp)Array();
  rv->len =  len_;
  rv->A= (int* ) (((char*)&(rv->B))   + sizeof(bool )*tlen_B); 
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  CopyArr(rv->B, B_, tlen_B, B_len ); 
  return rv;
}
void evalCheck__Wrapper(int i) {
  evalCheck(i);
}
void evalCheck__WrapperNospec(int i) {}
void evalCheck(int i) {
  int _tt0[6] = {1, 2, 3, 4, 5, 6};
  bool _tt1[5] = {1, 0, 1, 0, 1};
  Array*  arr=Array::create(6, _tt0, 6, _tt1, 5);
  int _tt2[6] = {1, 2, 3, 4, 5, 6};
  assert (arrCompare(arr->A, arr->len, _tt2, 6) && ((arr->len) == (6)));;
  if ((i) < (5)) {
    assert (((arr->B[i])) == ((((i % 2)) == (0))));;
  }
  int  t_s7=0;
  evalPolynomial(arr, 2, t_s7);
  assert ((t_s7) == (70));;
}
void evalPolynomial(Array* coeffs, int x, int& _out) {
  int  length=coeffs->len;
  Array*  arr_s9=NULL;
  range(0, length, 1, arr_s9);
  Array*  ar_s11=NULL;
  comprehension_eval1(arr_s9, coeffs, length, x, ar_s11);
  int  sum_list_s13=0;
  sum(ar_s11, sum_list_s13);
  _out = sum_list_s13;
  return;
}
void range(int begin, int end, int step, Array*& _out) {
  int*  res= new int [end - begin]; CopyArr<int >(res,0, end - begin);
  if ((begin) == (0)) {
    if ((step) == (0)) {
      int  i=0;
      while ((i) < (end)) {
        (res[i]) = i;
        i = i + 1;
      }
    } else {
      int  i_0=0;
      while ((i_0) < (end)) {
        (res[i_0]) = i_0;
        i_0 = i_0 + step;
      }
    }
    _out = Array::create(end - 0, (int*)NULL, 0, (bool*)NULL, 0);
    CopyArr<int >(_out->A,res, _out->len, end - begin);
  delete[] res;
    return;
  } else {
    if ((step) == (0)) {
      int  i_1=begin;
      while ((i_1) < (end)) {
        (res[i_1]) = i_1;
        i_1 = i_1 + 1;
      }
    } else {
      int  i_2=begin;
      while ((i_2) < (end)) {
        (res[i_2]) = i_2;
        i_2 = i_2 + step;
      }
    }
  }
  _out = Array::create(0, (int*)NULL, 0, (bool*)NULL, 0);
  CopyArr<int >(_out->A,res, _out->len, end - begin);
  delete[] res;
  return;
}
void comprehension_eval1(Array* ar, Array* coeffs0, int length1, int x2, Array*& _out) {
  int*  res= new int [ar->len]; CopyArr<int >(res,0, ar->len);
  bool  __sa1=(0) < (ar->len);
  int  i=0;
  while (__sa1) {
    int  a=(ar->A[i]);
    int  _out_s15=(coeffs0->A[((length1 - 1) - a)]) * (x2 * a);
    (res[i]) = _out_s15;
    i = i + 1;
    __sa1 = (i) < (ar->len);
  }
  _out = Array::create(ar->len, (int*)NULL, 0, (bool*)NULL, 0);
  CopyArr<int >(_out->A,res, _out->len, ar->len);
  delete[] res;
  return;
}
void sum(Array* ar, int& _out) {
  _out = 0;
  bool  __sa0=(0) < (ar->len);
  int  i=0;
  while (__sa0) {
    _out = _out + (ar->A[i]);
    i = i + 1;
    __sa0 = (i) < (ar->len);
  }
  return;
}

}
