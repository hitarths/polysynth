#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb440.h"
namespace ANONYMOUS{

template<typename T_0>
M* M::create(T_0* x_, int x_len){
  int tlen_x = 2 * 2; 
  void* temp= malloc( sizeof(M)   + sizeof(int )*tlen_x); 
  M* rv = new (temp)M();
  CopyArr(rv->x, x_, tlen_x, x_len ); 
  return rv;
}
void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  M*  x=M::create((int*)NULL, 0);
  int  t_4=(x->x[0]);
  assert ((t_4) == (0));;
}

}
