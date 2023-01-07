#ifndef MINITESTB204_H
#define MINITESTB204_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class HashSet; 
class ChainElement; 
}
namespace ANONYMOUS{
class HashSet; 
class ChainElement; 
class HashSet{
  public:
  ChainElement*  buckets;
  HashSet(){}
  static HashSet* create(  ChainElement*  buckets_);
  ~HashSet(){
  }
  void operator delete(void* p){ free(p); }
};
class ChainElement{
  public:
  bool  is_null;
  ChainElement*  next;
  ChainElement(){}
  static ChainElement* create(  bool  is_null_,   ChainElement*  next_);
  ~ChainElement(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch(bool input, int& _out);
extern void nosynth(bool input, int& _out);
}

#endif
