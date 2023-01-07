#ifndef MINITESTB404_H
#define MINITESTB404_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Mat; 
}
namespace ANONYMOUS{
class Mat; 
class Mat{
  public:
  int  r;
  int  c;
  int  M[];
  Mat(){}
template<typename T_0>
  static Mat* create(  int  r_,   int  c_,   T_0* M_, int M_len);
  ~Mat(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo__Wrapper(int r, int c);
extern void foo__WrapperNospec(int r, int c);
extern void foo(int r, int c, int* _out/* len = 10 * 10 */);
extern void min(int a, int b, int& _out);
}

#endif
