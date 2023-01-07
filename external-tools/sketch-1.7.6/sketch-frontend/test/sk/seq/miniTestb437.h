#ifndef MINITESTB437_H
#define MINITESTB437_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class MultiType; 
class MTDict; 
class KeyValuePair; 
class MTList; 
}
namespace ANONYMOUS{
class MultiType; 
class MTDict; 
class KeyValuePair; 
class MTList; 
class MultiType{
  public:
  int  val;
  int  flag;
  MTList*  lst;
  MTDict*  dict;
  MultiType(){}
  static MultiType* create(  int  val_,   int  flag_,   MTList*  lst_,   MTDict*  dict_);
  ~MultiType(){
  }
  void operator delete(void* p){ free(p); }
};
class MTDict{
  public:
  int  len;
  KeyValuePair*  kvpairs[];
  MTDict(){}
template<typename T_0>
  static MTDict* create(  T_0* kvpairs_, int kvpairs_len,   int  len_);
  ~MTDict(){
  }
  void operator delete(void* p){ free(p); }
};
class KeyValuePair{
  public:
  MultiType*  Key;
  MultiType*  Value;
  KeyValuePair(){}
  static KeyValuePair* create(  MultiType*  Key_,   MultiType*  Value_);
  ~KeyValuePair(){
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
extern void checkMTIndex__Wrapper();
extern void checkMTIndex__WrapperNospec();
extern void checkMTIndex();
extern void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out);
extern void intMul(int x, int y, int& _out);
extern void intDiv(int x, int y, int& _out);
extern void intPow(int x, int y, int& _out);
extern void intMod(int x, int y, int& _out);
}

#endif
