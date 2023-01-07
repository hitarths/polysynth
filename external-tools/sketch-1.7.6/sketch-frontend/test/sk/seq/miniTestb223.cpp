#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb223.h"
namespace ANONYMOUS{

template<typename T_0>
Set* Set::create(T_0* data_, int data_len){
  int tlen_data = 2; 
  void* temp= malloc( sizeof(Set)   + sizeof(bool )*tlen_data); 
  Set* rv = new (temp)Set();
  CopyArr(rv->data, data_, tlen_data, data_len ); 
  return rv;
}
void _main() {
  Set*  a=Set::create((bool*)NULL, 0);
  (a->data[0]) = 1;
  Set*  b=Set::create((bool*)NULL, 0);
  (b->data[0]) = 0;
  bool  _out_s1=0;
  f(a, b, _out_s1);
  assert (_out_s1);;
}
void nospec() {}
void f(Set* a, Set* b, bool& _out) {
  for (int  i=0;(i) < (2);i = i + 1){
    bool  x=(a->data[i]);
    bool  y=(b->data[i]);
    if (x || y) {
      _out = 1;
      return;
    }
  }
  _out = 1;
  return;
}

}
