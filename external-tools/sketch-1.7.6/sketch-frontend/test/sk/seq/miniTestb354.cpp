#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb354.h"
namespace ANONYMOUS{

A* A::create(int  x_){
  void* temp= malloc( sizeof(A)  ); 
  A* rv = new (temp)A();
  rv->x =  x_;
  return rv;
}
void main__Wrapper(int i) {
  void * _tt0[2] = {NULL, NULL};
  A**  x__ANONYMOUS_s5= new A* [2]; CopyArr<A* >(x__ANONYMOUS_s5,_tt0, 2, 2);
  glblInit_x__ANONYMOUS_s9(x__ANONYMOUS_s5);
  A*  v__ANONYMOUS_s4=NULL;
  glblInit_v__ANONYMOUS_s7(v__ANONYMOUS_s4);
  A*  t__ANONYMOUS_s3=NULL;
  _main(i, t__ANONYMOUS_s3, v__ANONYMOUS_s4, x__ANONYMOUS_s5);
  delete[] x__ANONYMOUS_s5;
}
void main__WrapperNospec(int i) {}
void glblInit_v__ANONYMOUS_s7(A*& v__ANONYMOUS_s6) {
  v__ANONYMOUS_s6 = A::create(0);
}
void glblInit_x__ANONYMOUS_s9(A** x__ANONYMOUS_s8/* len = 2 */) {
  A* _tt1[2] = {NULL, A::create(0)};
  CopyArr<A* >(x__ANONYMOUS_s8,_tt1, 2, 2);
}
void _main(int i, A*& t__ANONYMOUS_s0, A*& v__ANONYMOUS_s1, A** x__ANONYMOUS_s2/* len = 2 */) {
  (x__ANONYMOUS_s2[0]) = A::create(0);
  (x__ANONYMOUS_s2[0])->x = i;
  t__ANONYMOUS_s0 = (x__ANONYMOUS_s2[0]);
  A*  y=(x__ANONYMOUS_s2[0]);
  v__ANONYMOUS_s1->x = y->x + 1;
  assert ((y->x) == (i));;
  assert ((t__ANONYMOUS_s0->x) == (i));;
  assert ((v__ANONYMOUS_s1->x) == ((i + 1)));;
}

}
