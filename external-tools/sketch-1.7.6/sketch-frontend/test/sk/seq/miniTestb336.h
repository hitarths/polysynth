#ifndef MINITESTB336_H
#define MINITESTB336_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class sinfo; 
}
namespace ANONYMOUS{
class sinfo; 
class sinfo{
  public:
  int  buffer[];
  sinfo(){}
template<typename T_0>
  static sinfo* create(  T_0* buffer_, int buffer_len);
  ~sinfo(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}

#endif
