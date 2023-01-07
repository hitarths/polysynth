#ifndef MINITESTB173_H
#define MINITESTB173_H

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
  foo*  p;
  foo*  n;
  foo(){}
  static foo* create(  int  v_,   foo*  p_,   foo*  n_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sk(int i, bool& _out);
extern void test(int i, bool& _out);
}

#endif
