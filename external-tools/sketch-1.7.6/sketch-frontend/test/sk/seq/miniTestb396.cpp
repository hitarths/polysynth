#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb396.h"
namespace ANONYMOUS{

Foo* Foo::create(int  x_){
  void* temp= malloc( sizeof(Foo)  ); 
  Foo* rv = new (temp)Foo();
  rv->x =  x_;
  return rv;
}
void main__Wrapper(int x) {
  Foo*  f__ANONYMOUS_s5=NULL;
  glblInit_f__ANONYMOUS_s9(f__ANONYMOUS_s5);
  int  b__ANONYMOUS_s3=0;
  glblInit_b__ANONYMOUS_s7(b__ANONYMOUS_s3);
  int  c__ANONYMOUS_s4=0;
  _main(x, b__ANONYMOUS_s3, c__ANONYMOUS_s4, f__ANONYMOUS_s5);
}
void main__WrapperNospec(int x) {}
void glblInit_b__ANONYMOUS_s7(int& b__ANONYMOUS_s6) {
  b__ANONYMOUS_s6 = 15;
}
void glblInit_f__ANONYMOUS_s9(Foo*& f__ANONYMOUS_s8) {
  f__ANONYMOUS_s8 = Foo::create(5);
}
void _main(int x, int& b__ANONYMOUS_s0, int& c__ANONYMOUS_s1, Foo*& f__ANONYMOUS_s2) {
  c__ANONYMOUS_s1 = f__ANONYMOUS_s2->x + 1;
  b__ANONYMOUS_s0 = b__ANONYMOUS_s0 + x;
  c__ANONYMOUS_s1 = c__ANONYMOUS_s1 + x;
  f__ANONYMOUS_s2->x = f__ANONYMOUS_s2->x + 1;
  assert (((b__ANONYMOUS_s0 - x)) == (15));;
  assert ((c__ANONYMOUS_s1) == ((x + 6)));;
}

}
