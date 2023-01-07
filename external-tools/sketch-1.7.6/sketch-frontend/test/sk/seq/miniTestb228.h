#ifndef MINITESTB228_H
#define MINITESTB228_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Set; 
}
namespace ANONYMOUS{
class Set; 
class Set{
  public:
  int  numElements;
  int  elems[];
  Set(){}
template<typename T_0>
  static Set* create(  int  numElements_,   T_0* elems_, int elems_len);
  ~Set(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch(int* elemsT/* len = 3 */, int* elemsS/* len = 3 */, int a);
extern void dummy(int* elemsT/* len = 3 */, int* elemsS/* len = 3 */, int a);
extern void newSet(Set*& _out);
extern void addElement(Set* X, int y, Set*& _out);
extern void unionSet(Set* X, Set* Y, Set*& _out);
extern void isElemPresent(Set* X, int y, bool& _out);
extern void isEqual(Set* X, Set* Y, bool& _out);
}

#endif
