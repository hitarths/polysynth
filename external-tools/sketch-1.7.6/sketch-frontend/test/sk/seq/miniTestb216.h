#ifndef MINITESTB216_H
#define MINITESTB216_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class foo; 
}
namespace ANONYMOUS{
class foo; 
class foo{
  public:
  int  x;
  int  y;
  foo(){}
  static foo* create(  int  x_,   int  y_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test1__Wrapper(int x);
extern void test1__WrapperNospec(int x);
extern void test1(int x);
}

#endif
