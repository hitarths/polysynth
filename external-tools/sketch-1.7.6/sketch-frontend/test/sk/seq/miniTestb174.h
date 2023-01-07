#ifndef MINITESTB174_H
#define MINITESTB174_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class foo; 
}
namespace ANONYMOUS{
class foo; 
class foo{
  public:
  int  v;
  foo*  s;
  foo(){}
  static foo* create(  int  v_,   foo*  s_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sk(int i, bool& _out);
extern void test(int i, bool& _out);
}

#endif
