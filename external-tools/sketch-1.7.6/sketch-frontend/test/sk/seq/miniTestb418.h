#ifndef MINITESTB418_H
#define MINITESTB418_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class MultiType; 
class MTArray; 
}
namespace ANONYMOUS{
class MultiType; 
class MTArray; 
class MultiType{
  public:
  MTArray*  lst;
  int  val;
  int  flag;
  MultiType(){}
  static MultiType* create(  MTArray*  lst_,   int  val_,   int  flag_);
  ~MultiType(){
  }
  void operator delete(void* p){ free(p); }
};
class MTArray{
  public:
  int  len;
  MultiType*  A[];
  MTArray(){}
template<typename T_0>
  static MTArray* create(  int  len_,   T_0* A_, int A_len);
  ~MTArray(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int n, int* A/* len = n */);
extern void main__WrapperNospec(int n, int* A/* len = n */);
extern void _main(int n, int* A/* len = n */);
extern void everyOther(MultiType* x, MultiType*& _out);
extern void len(MultiType* x, MultiType*& _out);
extern void range(MultiType* x, MultiType*& _out);
extern void foreach_body1(MultiType* lst, MultiType* t1, MultiType* x0);
extern void body1(MultiType* i, MultiType* t, MultiType* x);
extern void append(MultiType* x, MultiType* y);
}

#endif
