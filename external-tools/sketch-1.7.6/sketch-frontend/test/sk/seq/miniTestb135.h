#ifndef MINITESTB135_H
#define MINITESTB135_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class voo; 
}
namespace ANONYMOUS{
class voo; 
class voo{
  public:
  int  x;
  voo*  next;
  voo*  prev;
  voo(){}
  static voo* create(  int  x_,   voo*  next_,   voo*  prev_);
  ~voo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch(int i, int& _out);
extern void spec(int i, int& _out);
extern void foo(voo* x, int i, int& _out);
}

#endif
