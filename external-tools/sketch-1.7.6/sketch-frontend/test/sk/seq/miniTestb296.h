#ifndef MINITESTB296_H
#define MINITESTB296_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class F; 
}
namespace BOO{
class F; 
class Big; 
}
namespace ANONYMOUS{
class F; 
class F{
  public:
  int  q;
  F(){}
  static F* create(  int  q_);
  ~F(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int v);
extern void main__WrapperNospec(int v);
extern void _main(int v);
extern void setX(F* pthis, int v);
}
namespace BOO{
class F; 
class Big; 
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
class Big{
  public:
  F*  f;
  Big(){}
  static Big* create(  F*  f_);
  ~Big(){
  }
  void operator delete(void* p){ free(p); }
};
extern void setX(F* pthis, int v);
extern void getX(F* pthis, int& _out);
extern void init(Big* pthis);
extern void setV(Big* pthis, int v);
extern void getV(Big* pthis, int& _out);
}

#endif
