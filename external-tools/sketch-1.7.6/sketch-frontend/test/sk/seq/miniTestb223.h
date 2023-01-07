#ifndef MINITESTB223_H
#define MINITESTB223_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Set; 
}
namespace ANONYMOUS{
class Set; 
class Set{
  public:
  bool  data[];
  Set(){}
template<typename T_0>
  static Set* create(  T_0* data_, int data_len);
  ~Set(){
  }
  void operator delete(void* p){ free(p); }
};
extern void _main();
extern void nospec();
extern void f(Set* a, Set* b, bool& _out);
}

#endif
