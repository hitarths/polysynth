#ifndef MINITESTB392_H
#define MINITESTB392_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Foo; 
class Bar; 
}
namespace ANONYMOUS{
class Foo; 
class Bar; 
class Foo{
  public:
  int  x;
  int  y;
  Foo(){}
  static Foo* create(  int  x_,   int  y_);
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
class Bar{
  public:
  Foo*  f;
  Bar*  b;
  Bar(){}
  static Bar* create(  Foo*  f_,   Bar*  b_);
  ~Bar(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int a, int bb, int c, int d, int e, int g);
extern void main__WrapperNospec(int a, int bb, int c, int d, int e, int g);
extern void _main(int a, int bb, int c, int d, int e, int g);
}

#endif
