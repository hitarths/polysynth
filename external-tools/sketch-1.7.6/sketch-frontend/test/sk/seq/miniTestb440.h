#ifndef MINITESTB440_H
#define MINITESTB440_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class M; 
}
namespace ANONYMOUS{
class M; 
class M{
  public:
  int  x[];
  M(){}
template<typename T_0>
  static M* create(  T_0* x_, int x_len);
  ~M(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int i);
extern void main__WrapperNospec(int i);
extern void _main(int i);
}

#endif
