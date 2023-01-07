#ifndef MINITESTB363_H
#define MINITESTB363_H

#include <cstring>

#include "vops.h"

namespace FOFO{
class Foo; 
}
namespace LALA{
class Foo; 
}
namespace FOFO{
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
extern void spec(int x, int& _out);
}
namespace LALA{
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
