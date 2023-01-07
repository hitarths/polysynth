#ifndef MINITESTB162_H
#define MINITESTB162_H

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
  foo(){}
  static foo* create(  int  x_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test(int x, int& _out);
extern void spec(int x, int& _out);
}

#endif
