#ifndef MINITESTB396_H
#define MINITESTB396_H

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
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void glblInit_b__ANONYMOUS_s7(int& b__ANONYMOUS_s6);
extern void glblInit_f__ANONYMOUS_s9(Foo*& f__ANONYMOUS_s8);
extern void _main(int x, int& b__ANONYMOUS_s0, int& c__ANONYMOUS_s1, Foo*& f__ANONYMOUS_s2);
}

#endif
