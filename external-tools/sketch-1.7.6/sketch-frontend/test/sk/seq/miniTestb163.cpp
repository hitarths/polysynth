#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb163.h"
namespace ANONYMOUS{

template<typename T_0>
foo* foo::create(T_0* x_, int x_len){
  int tlen_x = 3; 
  void* temp= malloc( sizeof(foo)   + sizeof(int )*tlen_x); 
  foo* rv = new (temp)foo();
  CopyArr(rv->x, x_, tlen_x, x_len ); 
  return rv;
}
void test(int x, int& _out) {
  foo*  far=foo::create((int*)NULL, 0);
  for (int  i=0;(i) < (3);i = i + 1){
    (far->x[i]) = i;
  }
  _out = (far->x[2]);
  return;
}
void spec(int x, int& _out) {
  _out = 2;
  return;
}

}
