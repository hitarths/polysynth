#ifndef MINITESTB294_H
#define MINITESTB294_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace BOO{
class F; 
}
namespace ANONYMOUS{
extern void main__Wrapper(int v);
extern void main__WrapperNospec(int v);
extern void _main(int v);
}
namespace BOO{
class F; 
class F{
  public:
  int  x;
  int  y;
  F(){}
  static F* create(  int  x_,   int  y_);
  ~F(){
  }
  void operator delete(void* p){ free(p); }
};
extern void setX(F* pthis, int v);
extern void getX(F* pthis, int& _out);
}

#endif
