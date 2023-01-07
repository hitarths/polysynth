#ifndef MINITESTB349_H
#define MINITESTB349_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Vec; 
}
namespace ANONYMOUS{
class Vec; 
class Vec{
  public:
  int  n;
  int*  data;
  Vec*  mvecs[];
  Vec(){}
template<typename T_0, typename T_1>
  static Vec* create(  int  n_,   T_0* data_, int data_len,   T_1* mvecs_, int mvecs_len);
  ~Vec(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n, int* d/* len = n */);
extern void main__WrapperNospec(int n, int* d/* len = n */);
extern void test2__Wrapper(int n);
extern void test2__WrapperNospec(int n);
extern void _main(int n, int* d/* len = n */);
extern void test2(int n);
extern void doSten(int n, int* x/* len = n */);
extern void initialize(int n, Vec** nVecs/* len = n */);
}

#endif
