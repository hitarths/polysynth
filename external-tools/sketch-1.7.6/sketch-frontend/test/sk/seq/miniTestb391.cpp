#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb391.h"
namespace ANONYMOUS{

foo* foo::create(int  x_){
  void* temp= malloc( sizeof(foo)  ); 
  foo* rv = new (temp)foo();
  rv->x =  x_;
  return rv;
}
void ske(int N, bool& _out) {
  foo*  x=NULL;
  if ((x) != (NULL)) {
    x->x = 1;
    _out = (x->x) == (1);
    return;
  }
  _out = 1;
  return;
}
void spec(int N, bool& _out) {
  _out = 1;
  return;
}
void main__Wrapper(int N) {
  _main(N);
}
void main__WrapperNospec(int N) {}
void _main(int N) {
  foo**  f= new foo* [N]; CopyArr<foo* >(f,NULL, N);
  for (int  i=0;(i) < (N);i = i + 1){
    (f[i]) = foo::create(0);
    (f[i])->x = i;
  }
  foo**  t= new foo* [N]; CopyArr<foo* >(t,NULL, N);
  for (int  i_0=0;(i_0) < (N);i_0 = i_0 + 1){
    (t[i_0]) = foo::create(0);
    (t[i_0])->x = i_0;
  }
  for (int  i_1=0;(i_1) < (N);i_1 = i_1 + 1){
    assert (((t[i_1])->x) == ((f[i_1])->x));;
  }
  delete[] f;
  delete[] t;
}

}
