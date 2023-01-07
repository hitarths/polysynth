#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb416.h"
namespace TT{

MultiType* MultiType::create(MTArray*  lost_, int  val_, int  flag_, int  fofo_){
  void* temp= malloc( sizeof(MultiType)  ); 
  MultiType* rv = new (temp)MultiType();
  rv->lost =  lost_;
  rv->val =  val_;
  rv->flag =  flag_;
  rv->fofo =  fofo_;
  return rv;
}
template<typename T_0>
MTArray* MTArray::create(int  len_, T_0* B_, int B_len){
  int tlen_B = len_; 
  void* temp= malloc( sizeof(MTArray)   + sizeof(MultiType* )*tlen_B); 
  MTArray* rv = new (temp)MTArray();
  rv->len =  len_;
  CopyArr(rv->B, B_, tlen_B, B_len ); 
  return rv;
}
void foo(MultiType*& _out) {
  _out = MultiType::create(NULL, 5, 0, 3);
  return;
}

}
namespace ANONYMOUS{

MultiType* MultiType::create(MTArray*  lst_, int  val_, int  flag_){
  void* temp= malloc( sizeof(MultiType)  ); 
  MultiType* rv = new (temp)MultiType();
  rv->lst =  lst_;
  rv->val =  val_;
  rv->flag =  flag_;
  return rv;
}
template<typename T_0>
MTArray* MTArray::create(int  len_, T_0* A_, int A_len){
  int tlen_A = len_; 
  void* temp= malloc( sizeof(MTArray)   + sizeof(MultiType* )*tlen_A); 
  MTArray* rv = new (temp)MTArray();
  rv->len =  len_;
  CopyArr(rv->A, A_, tlen_A, A_len ); 
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  TT::MultiType*  f_s1=NULL;
  TT::foo(f_s1);
  assert ((f_s1->fofo) == (3));;
}

}
