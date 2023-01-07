#ifndef MINITESTB405_H
#define MINITESTB405_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Array; 
}
namespace ANONYMOUS{
class Array; 
class Array{
  public:
  int  len;
  int*  A;
  bool  B[];
  Array(){}
template<typename T_0, typename T_1>
  static Array* create(  int  len_,   T_0* A_, int A_len,   T_1* B_, int B_len);
  ~Array(){
  }
  void operator delete(void* p){ free(p); }
};
extern void evalCheck__Wrapper(int i);
extern void evalCheck__WrapperNospec(int i);
extern void evalCheck(int i);
extern void evalPolynomial(Array* coeffs, int x, int& _out);
extern void range(int begin, int end, int step, Array*& _out);
extern void comprehension_eval1(Array* ar, Array* coeffs0, int length1, int x2, Array*& _out);
extern void sum(Array* ar, int& _out);
}

#endif
