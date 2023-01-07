#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb265.h"
namespace ANONYMOUS{

template<typename T_0>
F* F::create(T_0* q_, int q_len){
  int tlen_q = 20; 
  void* temp= malloc( sizeof(F)   + sizeof(int )*tlen_q); 
  F* rv = new (temp)F();
  CopyArr(rv->q, q_, tlen_q, q_len ); 
  return rv;
}
void main__Wrapper(int x) {
  _main(x);
}
void main__WrapperNospec(int x) {}
void _main(int x) {
  int  p=0;
  if ((x) < (10)) {
    F*  f=F::create((int*)NULL, 0);
    int _tt0[6] = {1, 2, 3, 4, 5, 6};
    CopyArr<int >(f->q,_tt0, 20, 6);
    p = (f->q[x + 1]);
  }
  assert ((p) < (7));;
}

}
