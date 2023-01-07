#ifndef MINITESTB429_H
#define MINITESTB429_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace TOO{
class Jar; 
class Bar; 
}
namespace ANONYMOUS{
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
}
namespace TOO{
class Jar; 
class Bar; 
class Jar{
  public:
  int  x;
  Bar*  b;
  Jar(){}
  static Jar* create(  int  x_,   Bar*  b_);
  ~Jar(){
  }
  void operator delete(void* p){ free(p); }
};
class Bar{
  public:
  int  x;
  Bar(){}
  static Bar* create(  int  x_);
  ~Bar(){
  }
  void operator delete(void* p){ free(p); }
};
extern void newJar(int i, Jar*& _out);
extern void newBar(int i, Bar*& _out);
}

#endif
