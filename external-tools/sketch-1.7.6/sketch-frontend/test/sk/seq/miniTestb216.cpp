#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb216.h"
namespace ANONYMOUS{

foo* foo::create(int  x_, int  y_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  rv->y =  y_;
  return rv;
}
void test1__Wrapper(int x) {
  test1(x);
}
void test1__WrapperNospec(int x) {}
void test1(int x) {
  foo**  f= new foo* [3]; CopyArr<foo* >(f,NULL, 3);
  CopyArr<foo* >(f,NULL, 3);
  (f[0]) = foo::create(0, 0);
  (f[0])->x = 5;
  (f[0])->y = x;
  (f[1]) = foo::create(0, 0);
  (f[0])->x = 1;
  (f[1])->y = x + 1;
  assert ((((f[0])->x + (f[0])->y)) == (((f[1])->x + (f[1])->y)));;
  delete[] f;
}

}
