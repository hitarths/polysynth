#ifndef MINITESTB195_H
#define MINITESTB195_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class node; 
}
namespace ANONYMOUS{
class node; 
class node{
  public:
  int  val;
  node*  next;
  node(){}
  static node* create(  int  val_,   node*  next_);
  ~node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main_fun(int n_0);
extern void VOID(int n);
}

#endif
