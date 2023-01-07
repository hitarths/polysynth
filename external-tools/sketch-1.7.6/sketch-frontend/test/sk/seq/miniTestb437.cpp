#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb437.h"
namespace ANONYMOUS{

MultiType* MultiType::create(int  val_, int  flag_, MTList*  lst_, MTDict*  dict_){
  void* temp= malloc( sizeof(MultiType)  ); 
  MultiType* rv = new (temp)MultiType();
  rv->val =  val_;
  rv->flag =  flag_;
  rv->lst =  lst_;
  rv->dict =  dict_;
  return rv;
}
template<typename T_0>
MTDict* MTDict::create(T_0* kvpairs_, int kvpairs_len, int  len_){
  int tlen_kvpairs = len_; 
  void* temp= malloc( sizeof(MTDict)   + sizeof(KeyValuePair* )*tlen_kvpairs); 
  MTDict* rv = new (temp)MTDict();
  rv->len =  len_;
  CopyArr(rv->kvpairs, kvpairs_, tlen_kvpairs, kvpairs_len ); 
  return rv;
}
KeyValuePair* KeyValuePair::create(MultiType*  Key_, MultiType*  Value_){
  void* temp= malloc( sizeof(KeyValuePair)  ); 
  KeyValuePair* rv = new (temp)KeyValuePair();
  rv->Key =  Key_;
  rv->Value =  Value_;
  return rv;
}
template<typename T_0>
MTList* MTList::create(int  len_, T_0* listValues_, int listValues_len){
  int tlen_listValues = len_; 
  void* temp= malloc( sizeof(MTList)   + sizeof(MultiType* )*tlen_listValues); 
  MTList* rv = new (temp)MTList();
  rv->len =  len_;
  CopyArr(rv->listValues, listValues_, tlen_listValues, listValues_len ); 
  return rv;
}
void checkMTIndex__Wrapper() {
  checkMTIndex();
}
void checkMTIndex__WrapperNospec() {}
void checkMTIndex() {
  MultiType*  one=MultiType::create(1, 0, NULL, NULL);
  MultiType* _tt0[1] = {one};
  MultiType*  oneList=MultiType::create(0, 1, MTList::create(1, _tt0, 1), NULL);
  MultiType*  zeroIndex=MultiType::create(0, 0, NULL, NULL);
  MultiType*  oneListCopy_s4=NULL;
  subscriptMTi(oneList, zeroIndex, oneListCopy_s4);
}
void subscriptMTi(MultiType* list, MultiType* index, MultiType*& _out) {
  assert ((list->flag) == (1));;
  assert ((index->flag) == (0));;
  assert ((index->val) < (list->lst->len));;
  _out = (list->lst->listValues[index->val]);
  return;
}
void intMul(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void intDiv(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void intPow(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}
void intMod(int x, int y, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
