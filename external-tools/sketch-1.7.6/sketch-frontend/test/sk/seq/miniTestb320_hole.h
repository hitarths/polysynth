#ifndef MINITESTB320_HOLE_H
#define MINITESTB320_HOLE_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void cacheObv1dSK(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */);
extern void cacheObv1d(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */);
extern void forLoop_t12(int low, int high, int T1, int N0, float* in3_0/* len = N0 */, float* f4_1/* len = N0 * T1 */, float* out2/* len = N0 * T1 */);
extern void forLoop_t24(int low, int high, int T1, int i5, int N0, float* in3_0/* len = N0 */, float* f4_1/* len = N0 * T1 */, float* out2/* len = N0 * T1 */);
}

#endif
