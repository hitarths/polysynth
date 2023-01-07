#ifndef MINITESTB198_H
#define MINITESTB198_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class node; 
}
namespace ANONYMOUS{
class node; 
class node{
  public:
  node*  n;
  node(){}
  static node* create(  node*  n_);
  ~node(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main_fun(int n0);
extern void VOID(int n);
}

#endif
