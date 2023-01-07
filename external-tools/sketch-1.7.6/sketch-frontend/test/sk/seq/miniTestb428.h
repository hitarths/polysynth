#ifndef MINITESTB428_H
#define MINITESTB428_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Bar; 
}
namespace Foo{
class Bar; 
class Moo; 
}
namespace ANONYMOUS{
class Bar; 
class Bar{
  public:
  int  aa;
  Bar(){}
  static Bar* create(  int  aa_);
  ~Bar(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
extern void getMe(int i, Foo::Moo*& _out);
}
namespace Foo{
class Bar; 
class Moo; 
class Bar{
  public:
  int  bb;
  Bar(){}
  static Bar* create(  int  bb_);
  ~Bar(){
  }
  void operator delete(void* p){ free(p); }
};
class Moo{
  public:
  int  x;
  Moo(){}
  static Moo* create(  int  x_);
  ~Moo(){
  }
  void operator delete(void* p){ free(p); }
};
}

#endif
