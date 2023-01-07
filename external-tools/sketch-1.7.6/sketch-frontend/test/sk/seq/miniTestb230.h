#ifndef MINITESTB230_H
#define MINITESTB230_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Grid; 
}
namespace ANONYMOUS{
class Grid; 
class Grid{
  public:
  int  data[];
  Grid(){}
template<typename T_0>
  static Grid* create(  T_0* data_, int data_len);
  ~Grid(){
  }
  void operator delete(void* p){ free(p); }
};
extern void _main(int* A1/* len = 5 */, bool& _out, int* grammar__ANONYMOUS_s15/* len = 6 */);
extern void spec(int* A1/* len = 5 */, bool& _out, int* grammar__ANONYMOUS_s16/* len = 6 */);
extern void glblInit_grammar__ANONYMOUS_s18(int* grammar__ANONYMOUS_s17/* len = 6 */);
extern void det_F(int* A1/* len = 5 */, bool& _out, int* grammar__ANONYMOUS_s14/* len = 6 */);
extern void putVal(int x, int y, int val, Grid* g);
extern void det_activate(int x, int y, Grid* g, int* grammar__ANONYMOUS_s13/* len = 6 */);
extern void getVal(int x, int y, Grid* g, int& _out);
extern void getParent(int x, int y, int& _out, int* grammar__ANONYMOUS_s12/* len = 6 */);
}

#endif
