#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb403.h"
namespace ANONYMOUS{

template<typename T_0, typename T_1>
Foo* Foo::create(int  x_, int  y_, T_0* n_, int n_len, T_1* m_, int m_len){
  int tlen_n = x_; 
  int tlen_m = x_ + y_; 
  void* temp= malloc( sizeof(Foo)   + sizeof(int )*tlen_n + sizeof(int )*tlen_m); 
  Foo* rv = new (temp)Foo();
  rv->x =  x_;
  rv->y =  y_;
  rv->n= (int* ) (((char*)&(rv->m))   + sizeof(int )*tlen_m); 
  CopyArr(rv->n, n_, tlen_n, n_len ); 
  CopyArr(rv->m, m_, tlen_m, m_len ); 
  return rv;
}
template<typename T_0>
Moo* Moo::create(int  x_, Foo*  f_, T_0* t_, int t_len){
  int tlen_t = f_->x + x_; 
  void* temp= malloc( sizeof(Moo)   + sizeof(Foo* )*tlen_t); 
  Moo* rv = new (temp)Moo();
  rv->x =  x_;
  rv->f =  f_;
  CopyArr(rv->t, t_, tlen_t, t_len ); 
  return rv;
}
void main__Wrapper(int in1, int in2, int in3) {
  _main(in1, in2, in3);
}
void main__WrapperNospec(int in1, int in2, int in3) {}
void _main(int in1, int in2, int in3) {
  Foo*  a=Foo::create(in1, in2, (int*)NULL, 0, (int*)NULL, 0);
  Moo*  m=Moo::create(in3, a, (Foo**)NULL, 0);
  int  _out_s3=in1 + in3;
  Foo**  xx= new Foo* [_out_s3]; CopyArr<Foo* >(xx,m->t, _out_s3, m->f->x + m->x);
  Foo**  yy= new Foo* [in1 + in3]; CopyArr<Foo* >(yy,m->t, in1 + in3, m->f->x + m->x);
  assert (arrCompare(xx, _out_s3, yy, (in1 + in3)) && ((_out_s3) == ((in1 + in3))));;
  delete[] xx;
  delete[] yy;
}

}
