#ifndef MINITESTB123_H
#define MINITESTB123_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class FA; 
class MA; 
}
namespace ANONYMOUS{
class FA; 
class MA; 
class FA{
  public:
  bool  x;
  FA(){}
  static FA* create(  bool  x_);
  ~FA(){
  }
  void operator delete(void* p){ free(p); }
};
class MA{
  public:
  FA*  y;
  MA(){}
  static MA* create(  FA*  y_);
  ~MA(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sk(bool i, bool& _out);
extern void spec(bool i, bool& _out);
}

#endif
