#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb224.h"
namespace ANONYMOUS{

template<typename T_0>
T* T::create(int  a_, T*  b_, T_0* c_, int c_len){
  int tlen_c = 4; 
  void* temp= malloc( sizeof(T)   + sizeof(T* )*tlen_c); 
  T* rv = new (temp)T();
  rv->a =  a_;
  rv->b =  b_;
  CopyArr(rv->c, c_, tlen_c, c_len ); 
  return rv;
}
void main__Wrapper() {
  _main();
}
void main__WrapperNospec() {}
void _main() {
  T*  t=T::create(0, NULL, (T**)NULL, 0);
  for (int  i=0;(i) < (10);i = i + 1){
    t = T::create(0, NULL, (T**)NULL, 0);
  }
  assert ((t->a) == (0));;
  assert ((t->b) == (NULL));;
  assert (((t->c[0])) == (NULL));;
  assert (((t->c[1])) == (NULL));;
  assert (((t->c[2])) == (NULL));;
}

}
