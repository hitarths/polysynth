#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb162.h"
namespace ANONYMOUS{

foo* foo::create(int  x_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  return rv;
}
void test(int x, int& _out) {
  void * _tt0[3] = {NULL, NULL, NULL};
  foo**  far= new foo* [3]; CopyArr<foo* >(far,_tt0, 3, 3);
  for (int  i=0;(i) < (3);i = i + 1){
    (far[i]) = foo::create(0);
    (far[i])->x = i;
  }
  _out = (far[2])->x;
  delete[] far;
  return;
}
void spec(int x, int& _out) {
  _out = 2;
  return;
}

}
