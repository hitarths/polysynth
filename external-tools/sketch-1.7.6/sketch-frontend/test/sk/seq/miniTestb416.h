#ifndef MINITESTB416_H
#define MINITESTB416_H

#include <cstring>

#include "vops.h"

namespace TT{
class MultiType; 
class MTArray; 
}
namespace ANONYMOUS{
class MultiType; 
class MTArray; 
}
namespace TT{
class MultiType; 
class MTArray; 
class MultiType{
  public:
  MTArray*  lost;
  int  val;
  int  flag;
  int  fofo;
  MultiType(){}
  static MultiType* create(  MTArray*  lost_,   int  val_,   int  flag_,   int  fofo_);
  ~MultiType(){
  }
  void operator delete(void* p){ free(p); }
};
class MTArray{
  public:
  int  len;
  MultiType*  B[];
  MTArray(){}
template<typename T_0>
  static MTArray* create(  int  len_,   T_0* B_, int B_len);
  ~MTArray(){
  }
  void operator delete(void* p){ free(p); }
};
extern void foo(MultiType*& _out);
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
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}

#endif
