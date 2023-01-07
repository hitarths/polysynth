#ifndef MINITESTB126_H
#define MINITESTB126_H

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
extern void sketch(int i, bool& _out);
extern void spec(int i, bool& _out);
}

#endif
