#ifndef MINITESTB421_H
#define MINITESTB421_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class mst; 
}
namespace ANONYMOUS{
class mst; 
class mst{
  public:
  int  n;
  int  m;
  int  u;
  int  A[];
  mst(){}
template<typename T_0>
  static mst* create(  int  n_,   int  m_,   int  u_,   T_0* A_, int A_len);
  ~mst(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int x, int y, int i);
extern void main__WrapperNospec(int x, int y, int i);
extern void _main(int x, int y, int i);
extern void foo(int i, int n, int* _out/* len = n */);
}

#endif
