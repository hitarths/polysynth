#ifndef MINITESTB386_H
#define MINITESTB386_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Tuple; 
}
namespace ANONYMOUS{
class Tuple; 
class Tuple{
  public:
  int  first;
  int  second;
  Tuple(){}
  static Tuple* create(  int  first_,   int  second_);
  ~Tuple(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch__Wrapper(int lenRet, int* r1/* len = lenRet */, int* r2/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int j, int i, int t1);
extern void sketch__WrapperNospec(int lenRet, int* r1/* len = lenRet */, int* r2/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int j, int i, int t1);
extern void sketch(int lenRet, int* r1/* len = lenRet */, int* r2/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int j, int i, int t1);
extern void innerInvariant(int lenRet, Tuple** ret/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int i, int j, int t1, bool& _out);
extern void outerInvariant(int lenRet, Tuple** ret/* len = lenRet */, int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, int i, int j, int t1, bool& _out);
extern void get(int i, int N, int* A/* len = N */, int& _out);
extern void top(int T, int N, int* A/* len = N */, int* _out/* len = T */);
extern void product(int len1, int* l1/* len = len1 */, int len2, int* l2/* len = len2 */, Tuple** _out/* len = len1 * len2 */);
extern void leftProduct(int v, int len2, int* l2/* len = len2 */, Tuple** _out/* len = len2 */);
extern void appendTupleList(int len1, Tuple** l1/* len = len1 */, int len2, Tuple** l2/* len = len2 */, Tuple** _out/* len = len1 + len2 */);
extern void tupleListEquals(int l1Len, Tuple** l1/* len = l1Len */, int l2Len, Tuple** l2/* len = l2Len */, bool& _out);
}

#endif
