#ifndef MINITESTB395_H
#define MINITESTB395_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Foo; 
class Moo; 
}
namespace ANONYMOUS{
class Foo; 
class Moo; 
class Foo{
  public:
  int  n;
  int  a[];
  Foo(){}
template<typename T_0>
  static Foo* create(  int  n_,   T_0* a_, int a_len);
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
class Moo{
  public:
  Foo*  f;
  int  b[];
  Moo(){}
template<typename T_0>
  static Moo* create(  Foo*  f_,   T_0* b_, int b_len);
  ~Moo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n);
extern void main__WrapperNospec(int n);
extern void glblInit_q__ANONYMOUS_s11(int& q__ANONYMOUS_s10);
extern void glblInit_tt__ANONYMOUS_s13(Foo*& tt__ANONYMOUS_s12);
extern void _main(int n, int& q__ANONYMOUS_s8);
extern void min(int a, int b, int& _out);
extern void newFoo(int n, Foo*& _out);
extern void modi(int& q__ANONYMOUS_s7);
}

#endif
