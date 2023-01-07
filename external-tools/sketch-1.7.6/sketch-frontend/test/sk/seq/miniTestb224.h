#ifndef MINITESTB224_H
#define MINITESTB224_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class T; 
}
namespace ANONYMOUS{
class T; 
class T{
  public:
  int  a;
  T*  b;
  T*  c[];
  T(){}
template<typename T_0>
  static T* create(  int  a_,   T*  b_,   T_0* c_, int c_len);
  ~T(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}

#endif
