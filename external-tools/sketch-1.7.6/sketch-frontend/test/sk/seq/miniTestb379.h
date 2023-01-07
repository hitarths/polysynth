#ifndef MINITESTB379_H
#define MINITESTB379_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Tuple; 
}
namespace ANONYMOUS{
class Tuple; 
class Tuple{
  public:
  int  first;
  int  second;
  Tuple(){}
  static Tuple* create(  int  first_,   int  second_);
  ~Tuple(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch__Wrapper(int len2, int* l2/* len = len2 */, int t1);
extern void sketch__WrapperNospec(int len2, int* l2/* len = len2 */, int t1);
extern void sketch(int len2, int* l2/* len = len2 */, int t1);
extern void leftProduct(int v, int len2, int* l2/* len = len2 */, Tuple** _out/* len = len2 */);
}

#endif
