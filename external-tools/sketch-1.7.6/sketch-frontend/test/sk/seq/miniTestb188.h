#ifndef MINITESTB188_H
#define MINITESTB188_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class P; 
}
namespace ANONYMOUS{
class P; 
class P{
  public:
  P*  dummy;
  P(){}
  static P* create(  P*  dummy_);
  ~P(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main_fun(bool& _out);
extern void T(bool& _out);
}

#endif
