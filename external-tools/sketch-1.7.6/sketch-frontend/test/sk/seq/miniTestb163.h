#ifndef MINITESTB163_H
#define MINITESTB163_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class foo; 
}
namespace ANONYMOUS{
class foo; 
class foo{
  public:
  int  x[];
  foo(){}
template<typename T_0>
  static foo* create(  T_0* x_, int x_len);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test(int x, int& _out);
extern void spec(int x, int& _out);
}

#endif
