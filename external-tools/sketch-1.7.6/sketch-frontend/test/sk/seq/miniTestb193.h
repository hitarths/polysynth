#ifndef MINITESTB193_H
#define MINITESTB193_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Set; 
class Node; 
}
namespace ANONYMOUS{
class Set; 
class Node; 
class Set{
  public:
  Node*  head;
  Node*  tail;
  Set(){}
  static Set* create(  Node*  head_,   Node*  tail_);
  ~Set(){
  }
  void operator delete(void* p){ free(p); }
};
class Node{
  public:
  int  key;
  Node*  next;
  Node(){}
  static Node* create(  int  key_,   Node*  next_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main_fun(int s);
extern void VOID(int s);
}

#endif
