#ifndef MINITESTB380_H
#define MINITESTB380_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void cacheObv1dSK(int N, float* in/* len = N */, float* _out/* len = N */);
extern void cacheObv1d(int N, float* in/* len = N */, float* _out/* len = N */);
extern void forLoop_t21(int low, int high, int N1, float* in2_0/* len = N1 */, float* out0/* len = N1 */);
}

#endif
