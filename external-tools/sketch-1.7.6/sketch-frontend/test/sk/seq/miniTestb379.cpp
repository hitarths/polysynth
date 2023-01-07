#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb379.h"
namespace ANONYMOUS{

Tuple* Tuple::create(int  first_, int  second_){
  void* temp= malloc( sizeof(Tuple)  ); 
  Tuple* rv = new (temp)Tuple();
  rv->first =  first_;
  rv->second =  second_;
  return rv;
}
void sketch__Wrapper(int len2, int* l2/* len = len2 */, int t1) {
  sketch(len2, l2, t1);
}
void sketch__WrapperNospec(int len2, int* l2/* len = len2 */, int t1) {}
void sketch(int len2, int* l2/* len = len2 */, int t1) {
  Tuple**  t1_cross_top1_l2_s1= new Tuple* [len2]; CopyArr<Tuple* >(t1_cross_top1_l2_s1,NULL, len2);
  leftProduct(t1, len2, l2, t1_cross_top1_l2_s1);
  delete[] t1_cross_top1_l2_s1;
}
void leftProduct(int v, int len2, int* l2/* len = len2 */, Tuple** _out/* len = len2 */) {
  CopyArr<Tuple* >(_out,NULL, len2);
  for (int  j=0;(j) < (len2);j = j + 1){
    Tuple*  t=Tuple::create(0, 0);
    t->first = v;
    t->second = (l2[j]);
    (_out[j]) = t;
  }
  return;
}

}
