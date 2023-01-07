#ifndef MINITESTB391_H
#define MINITESTB391_H

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
  foo(){}
  static foo* create(  int  x_);
  ~foo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void ske(int N, bool& _out);
extern void spec(int N, bool& _out);
extern void main__Wrapper(int N);
extern void main__WrapperNospec(int N);
extern void _main(int N);
}

#endif
