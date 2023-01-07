#ifndef MINITESTB425_H
#define MINITESTB425_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Image; 
}
namespace ANONYMOUS{
class Image; 
class Image{
  public:
  int  r;
  int  c;
  int  im[];
  Image(){}
template<typename T_0>
  static Image* create(  int  r_,   int  c_,   T_0* im_, int im_len);
  ~Image(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int ir, int ic);
extern void main__WrapperNospec(int ir, int ic);
extern void glblInit_imid__ANONYMOUS_s19(int& imid__ANONYMOUS_s18);
extern void _main(int ir, int ic, int& imid__ANONYMOUS_s17);
extern void readImg(int ir, int ic, Image*& _out, int& imid__ANONYMOUS_s15);
extern void edgeDetector(int r, int c, int* im/* len = (3 * c) * r */);
extern void applyFilter_writeBack1(int r, int c, int K, int r2, int c1, int maxVal6, int __sa15, int __sa04, int* im0/* len = (3 * c1) * r2 */, int* dbuf3_0/* len = __sa04 * __sa15 */);
extern void getIm(int i, int& _out);
}

#endif
