#ifndef MINITESTB432_H
#define MINITESTB432_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class MultiType; 
class MTList; 
}
namespace ANONYMOUS{
class MultiType; 
class MTList; 
class MultiType{
  public:
  int  val;
  int  flag;
  MTList*  lst;
  MultiType(){}
  static MultiType* create(  int  val_,   int  flag_,   MTList*  lst_);
  ~MultiType(){
  }
  void operator delete(void* p){ free(p); }
};
class MTList{
  public:
  int  len;
  MultiType*  listValues[];
  MTList(){}
template<typename T_0>
  static MTList* create(  int  len_,   T_0* listValues_, int listValues_len);
  ~MTList(){
  }
  void operator delete(void* p){ free(p); }
};
extern void multSketch(int m, int n, int& _out);
extern void mult(int m, int n, int& _out);
extern void multIA(MultiType* m, MultiType* n, MultiType*& _out);
extern void fuzzAssign(int x, int& _out);
extern void range(MultiType* x, MultiType*& _out);
extern void foreach_body1(MultiType* lst, MultiType*& result0, MultiType* m1);
extern void body1(MultiType* y, MultiType*& result, MultiType* m);
extern void multiplyMultiType(MultiType* m, MultiType* n, MultiType*& _out);
}

#endif
