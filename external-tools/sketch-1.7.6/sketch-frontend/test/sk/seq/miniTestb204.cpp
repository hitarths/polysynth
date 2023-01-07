#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb204.h"
namespace ANONYMOUS{

HashSet* HashSet::create(ChainElement*  buckets_){
  void* temp= malloc( sizeof(HashSet)  ); 
  HashSet* rv = new (temp)HashSet();
  rv->buckets =  buckets_;
  return rv;
}
ChainElement* ChainElement::create(bool  is_null_, ChainElement*  next_){
  void* temp= malloc( sizeof(ChainElement)  ); 
  ChainElement* rv = new (temp)ChainElement();
  rv->is_null =  is_null_;
  rv->next =  next_;
  return rv;
}
void sketch(bool input, int& _out) {
  HashSet*  hs=HashSet::create(NULL);
  ChainElement*  elt=hs->buckets;
  if ((elt) == (NULL)) {
    _out = 1;
    return;
  }
  _out = 0;
  return;
}
void nosynth(bool input, int& _out) {
  _out = 1;
  return;
}

}
