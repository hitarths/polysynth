#ifndef MINITESTB417_H
#define MINITESTB417_H

#include <cstring>

#include "vops.h"

namespace TT{
class Integer; 
}
namespace MM{
class Integer; 
}
namespace TT{
class Integer; 
class Integer{
  public:
  int  o;
  Integer(){}
  static Integer* create(  int  o_);
  ~Integer(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo(Integer*& _out, Integer*& u__TT_s8, MM::Integer*& x__MM_s10);
extern void moo(Integer*& _out, Integer*& u__TT_s7);
}
namespace MM{
class Integer; 
class Integer{
  public:
  int  v;
  Integer(){}
  static Integer* create(  int  v_);
  ~Integer(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int in);
extern void main__WrapperNospec(int in);
extern void _main(int in, TT::Integer*& u__TT_s13, Integer*& x__MM_s6);
extern void getX(Integer*& _out, Integer*& x__MM_s9);
}

#endif
