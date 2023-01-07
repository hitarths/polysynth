#ifndef MINITESTB142_H
#define MINITESTB142_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Box; 
}
namespace ANONYMOUS{
class Box; 
class Box{
  public:
  int  v;
  Box(){}
  static Box* create(  int  v_);
  ~Box(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo(int i, int& _out);
extern void spec(int i, int& _out);
}

#endif
