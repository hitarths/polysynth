#ifndef MINITESTB122_H
#define MINITESTB122_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class FA; 
}
namespace ANONYMOUS{
class FA; 
class FA{
  public:
  bool  x;
  FA(){}
  static FA* create(  bool  x_);
  ~FA(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sk(bool i, bool& _out);
extern void spec(bool i, bool& _out);
}

#endif
