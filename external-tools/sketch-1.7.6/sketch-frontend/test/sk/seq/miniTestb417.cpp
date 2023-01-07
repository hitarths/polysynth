#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb417.h"
namespace TT{

Integer* Integer::create(int  o_){
  void* temp= malloc( sizeof(Integer)  ); 
  Integer* rv = new (temp)Integer();
  rv->o =  o_;
  return rv;
}
void foo(Integer*& _out, Integer*& u__TT_s8, MM::Integer*& x__MM_s10) {
  u__TT_s8 = Integer::create(5);
  MM::Integer*  tt_s1=NULL;
  MM::getX(tt_s1, x__MM_s10);
  _out = Integer::create(tt_s1->v);
  return;
}
void moo(Integer*& _out, Integer*& u__TT_s7) {
  _out = u__TT_s7;
  return;
}

}
namespace MM{

Integer* Integer::create(int  v_){
  void* temp= malloc( sizeof(Integer)  ); 
  Integer* rv = new (temp)Integer();
  rv->v =  v_;
  return rv;
}
void main__Wrapper(int in) {
  TT::Integer*  u__TT_s11=NULL;
  Integer*  x__MM_s12=NULL;
  _main(in, u__TT_s11, x__MM_s12);
}
void main__WrapperNospec(int in) {}
void _main(int in, TT::Integer*& u__TT_s13, Integer*& x__MM_s6) {
  x__MM_s6 = Integer::create(in);
  TT::Integer*  ti_s3=NULL;
  TT::foo(ti_s3, u__TT_s13, x__MM_s6);
  assert ((ti_s3->o) == (in));;
  TT::Integer*  q_s5=NULL;
  TT::moo(q_s5, u__TT_s13);
  assert ((q_s5->o) == (5));;
}
void getX(Integer*& _out, Integer*& x__MM_s9) {
  _out = x__MM_s9;
  return;
}

}
