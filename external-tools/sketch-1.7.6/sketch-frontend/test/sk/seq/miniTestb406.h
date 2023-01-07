#ifndef MINITESTB406_H
#define MINITESTB406_H

#include <cstring>

#include "vops.h"

namespace PRIME{
class A; 
}
namespace MAIN{
class A; 
}
namespace BIS{
class A; 
}
namespace PRIME{
class A; 
class A{
  public:
  int  a;
  int  b;
  A(){}
  static A* create(  int  a_,   int  b_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo2(int x, int y, int& _out);
}
namespace MAIN{
class A; 
class A{
  public:
  int  e;
  int  f;
  A(){}
  static A* create(  int  e_,   int  f_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x);
extern void main__WrapperNospec(int x);
extern void _main(int x);
extern void call(int x, int& _out);
extern void foo1(int x, int& _out);
extern void call_foo3(int x, int& _out);
}
namespace BIS{
class A; 
class A{
  public:
  int  c;
  int  d;
  A(){}
  static A* create(  int  c_,   int  d_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void call_foo32(MAIN::A* a10, PRIME::A* a22, A* a31, int& _out);
extern void call_foo31(int x, int& _out);
}

#endif
