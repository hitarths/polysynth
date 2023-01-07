#ifndef MINITESTB403_H
#define MINITESTB403_H

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
  int  x;
  int  y;
  int*  n;
  int  m[];
  Foo(){}
template<typename T_0, typename T_1>
  static Foo* create(  int  x_,   int  y_,   T_0* n_, int n_len,   T_1* m_, int m_len);
  ~Foo(){
  }
  void operator delete(void* p){ free(p); }
};
class Moo{
  public:
  int  x;
  Foo*  f;
  Foo*  t[];
  Moo(){}
template<typename T_0>
  static Moo* create(  int  x_,   Foo*  f_,   T_0* t_, int t_len);
  ~Moo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int in1, int in2, int in3);
extern void main__WrapperNospec(int in1, int in2, int in3);
extern void _main(int in1, int in2, int in3);
}

#endif
