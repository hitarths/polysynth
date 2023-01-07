#ifndef MINITESTB301_H
#define MINITESTB301_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class LocationTuple; 
}
namespace ANONYMOUS{
class LocationTuple; 
class LocationTuple{
  public:
  int  location;
  int  user;
  int  timeStart;
  int  timeEnd;
  LocationTuple(){}
  static LocationTuple* create(  int  location_,   int  user_,   int  timeStart_,   int  timeEnd_);
  ~LocationTuple(){
  }
  void operator delete(void* p){ free(p); }
};
extern void sketch__Wrapper(int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */);
extern void sketch__WrapperNospec(int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */);
extern void sketch(int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */);
extern void initTuples(LocationTuple** tuples/* len = 3 */, int* location/* len = 3 */, int* user/* len = 3 */, int* timeStart/* len = 3 */, int* timeEnd/* len = 3 */);
}

#endif
