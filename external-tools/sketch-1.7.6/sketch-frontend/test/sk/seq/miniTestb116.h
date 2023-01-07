#ifndef MINITESTB116_H
#define MINITESTB116_H

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
  Node*  next;
  bool  taken;
  Node(){}
  static Node* create(  int  val_,   Node*  next_,   bool  taken_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void testSK(int i, int& _out);
extern void test(int i, int& _out);
}

#endif
