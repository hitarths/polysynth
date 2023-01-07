#ifndef MINITESTB145_H
#define MINITESTB145_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class foo; 
}
namespace ANONYMOUS{
class foo; 
class foo{
  public:
  foo*  x;
  foo(){}
  static foo* create(  foo*  x_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void t(bool& _out);
extern void one(bool& _out);
}

#endif
