#ifndef MINITESTB384_H
#define MINITESTB384_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class F; 
}
namespace ANONYMOUS{
class F; 
class F{
  public:
  int  t;
  F*  x;
  F(){}
  static F* create(  int  t_,   F*  x_);
  ~F(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
extern void foo(int i, F* f);
}

#endif
