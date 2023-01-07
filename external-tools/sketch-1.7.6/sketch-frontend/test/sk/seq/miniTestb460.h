#ifndef MINITESTB460_H
#define MINITESTB460_H

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
extern void rest(int* in/* len = 5 */, bool* ctrl/* len = 5 */, int* _out/* len = 5 */);
extern void test(int* in/* len = 5 */, bool* ctrl/* len = 5 */, int* _out/* len = 5 */);
extern void enqueue(Queue* q, int i, int& _out);
extern void dequeue(Queue* q, int& _out);
}

#endif
