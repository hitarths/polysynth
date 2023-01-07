#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb421.h"
namespace ANONYMOUS{

template<typename T_0>
mst* mst::create(int  n_, int  m_, int  u_, T_0* A_, int A_len){
  int tlen_A = (n_ * m_) * u_; 
  void* temp= malloc( sizeof(mst)   + sizeof(int )*tlen_A); 
  mst* rv = new (temp)mst();
  rv->n =  n_;
  rv->m =  m_;
  rv->u =  u_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
void main__Wrapper(int x, int y, int i) {
  _main(x, y, i);
}
void main__WrapperNospec(int x, int y, int i) {}
void _main(int x, int y, int i) {
  bool _tt0[5] = {0, 0, 0, 0, 0};
  int*  a_s1= new int [5]; CopyArr<int >(a_s1,_tt0, 5, 5);
  foo(x + 4, 5, a_s1);
  bool _tt1[5] = {0, 0, 0, 0, 0};
  int*  b_s3= new int [5]; CopyArr<int >(b_s3,_tt1, 5, 5);
  foo(y + 4, 5, b_s3);
  if (((x) == (y)) && ((i) < (5))) {
    assert (((a_s1[2])) == ((b_s3[2])));;
  }
  int*  ttt= new int [(x + y) + i]; CopyArr<int >(ttt,0, (x + y) + i);
  if (((x) > (0)) && ((y) > (2))) {
    assert (((1 + (x + i))) <= (((x + y) + i)));;
    assert ((x) <= ((x + i)));;
    CopyArr<int >((ttt+ 1),1, x);
  }
  mst*  mm=mst::create(x, y, i, (int*)NULL, 0);
  int*  O= new int [x * y]; CopyArr<int >(O,0, x * y);
  for (int  __sa4=0;(__sa4) < (y);__sa4 = __sa4 + 1){
    if ((__sa4) < (1)) {
      assert (((__sa4) >= (0)) && ((__sa4) < (y)));;
      CopyArr<int >((O+ x * __sa4),1, x);
    } else {
      assert (((__sa4) >= (0)) && ((__sa4) < (y)));;
      CopyArr<int >((O+ x * __sa4),0, x);
    }
  }
  if ((mm->u) > (0)) {
    assert ((mm->m) >= (y));;
    for (int  __sa5=0;(__sa5) < (mm->m);__sa5 = __sa5 + 1){
      if ((__sa5) < (y)) {
        assert ((0) < (mm->u));;
        assert (((__sa5) >= (0)) && ((__sa5) < (mm->m)));;
        assert (((__sa5) >= (0)) && ((__sa5) < (y)));;
        CopyArr<int >((mm->A+ mm->n * __sa5),(O+ x * __sa5), mm->n, x);
      } else {
        assert ((0) < (mm->u));;
        assert (((__sa5) >= (0)) && ((__sa5) < (mm->m)));;
        CopyArr<int >((mm->A+ mm->n * __sa5),0, mm->n);
      }
    }
    if (((mm->n) > (0)) && ((mm->m) > (0))) {
      assert ((0) < (mm->u));;
      assert ((0) < (mm->m));;
      assert ((0) < (mm->n));;
      assert (((mm->A[0])) == (1));;
    }
  }
}
void foo(int i, int n, int* _out/* len = n */) {
  CopyArr<int >(_out,0, n);
  for (int  j=0;(j) < (n);j = j + 1){
    (_out[j]) = i + j;
  }
  return;
}

}
