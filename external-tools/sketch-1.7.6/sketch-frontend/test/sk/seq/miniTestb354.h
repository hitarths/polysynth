#ifndef MINITESTB354_H
#define MINITESTB354_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class A; 
}
namespace ANONYMOUS{
class A; 
class A{
  public:
  int  x;
  A(){}
  static A* create(  int  x_);
  ~A(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void glblInit_v__ANONYMOUS_s7(A*& v__ANONYMOUS_s6);
extern void glblInit_x__ANONYMOUS_s9(A** x__ANONYMOUS_s8/* len = 2 */);
extern void _main(int i, A*& t__ANONYMOUS_s0, A*& v__ANONYMOUS_s1, A** x__ANONYMOUS_s2/* len = 2 */);
}

#endif
