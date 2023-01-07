#ifndef MINITESTB427_H
#define MINITESTB427_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Temp; 
}
namespace ANONYMOUS{
class Temp; 
class Temp{
  public:
  int  n;
  int  fa[];
  Temp(){}
template<typename T_0>
  static Temp* create(  int  n_,   T_0* fa_, int fa_len);
  ~Temp(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n);
extern void main__WrapperNospec(int n);
extern void _main(int n);
extern void foo1(int n, int* x/* len = n */, int* y/* len = n / 2 */);
}

#endif
