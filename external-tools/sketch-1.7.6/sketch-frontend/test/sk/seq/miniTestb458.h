#ifndef MINITESTB458_H
#define MINITESTB458_H

#include <cstring>

#include "vops.h"

namespace foo{
class moo; 
class foo; 
}
namespace foo{
class moo; 
class foo; 
class moo{
  public:
  int  foo;
  moo(){}
  static moo* create(  int  foo_);
  ~moo(){
  }
  void operator delete(void* p){ free(p); }
};
class foo{
  public:
  int  x;
  int  y;
  int  moo;
  foo(){}
  static foo* create(  int  x_,   int  y_,   int  moo_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
extern void Foo(int x, int& _out);
}

#endif
