#ifndef MINITESTB381_H
#define MINITESTB381_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class List; 
}
namespace ANONYMOUS{
class List; 
class List{
  public:
  int  i;
  List*  l;
  List(){}
  static List* create(  int  i_,   List*  l_);
  ~List(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo__Wrapper(int n);
extern void foo__WrapperNospec(int n);
extern void foo(int n);
extern void recBuild(int n, List*& _out);
}

#endif
