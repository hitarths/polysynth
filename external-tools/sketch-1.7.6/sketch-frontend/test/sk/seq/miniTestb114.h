#ifndef MINITESTB114_H
#define MINITESTB114_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Queue; 
class Node; 
}
namespace ANONYMOUS{
class Queue; 
class Node; 
class Queue{
  public:
  Node*  head;
  Node*  tail;
  Queue(){}
  static Queue* create(  Node*  head_,   Node*  tail_);
  ~Queue(){
  }
  void operator delete(void* p){ free(p); }
};
class Node{
  public:
  int  val;
  Node*  next;
  Node(){}
  static Node* create(  int  val_,   Node*  next_);
  ~Node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void rest(int in, int& _out);
extern void test(int in, int& _out);
extern void newQueue(Queue*& _out);
extern void newNode(int i, Node*& _out);
}

#endif
