#ifndef MINITESTB170_H
#define MINITESTB170_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Node; 
}
namespace ANONYMOUS{
class Node; 
class Node{
  public:
  int  val;
  int  next;
  Node(){}
  static Node* create(  int  val_,   int  next_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void test(int i, int& _out);
extern void rest(int i, int& _out);
}

#endif
