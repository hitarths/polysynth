#ifndef MINITESTB133_H
#define MINITESTB133_H

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
  voo(){}
  static voo* create(  int  x_);
  ~voo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch(int i, int& _out);
extern void spec(int i, int& _out);
}

#endif
