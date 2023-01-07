#ifndef MINITESTB362_H
#define MINITESTB362_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Foo; 
}
namespace ANONYMOUS{
class Foo; 
class Foo{
  public:
  int  x;
  Foo(){}
  static Foo* create(  int  x_);
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch(int x, int& _out);
extern void spec(int x, int& _out);
}

#endif
