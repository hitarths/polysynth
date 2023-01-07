#ifndef MINITESTB320_H
#define MINITESTB320_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void cacheObv1dSK(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */);
extern void cacheObv1d(int N, int T, float* in/* len = N */, float* f/* len = N * T */, float* _out/* len = N * T */);
extern void test__Wrapper(int N);
extern void test__WrapperNospec(int N);
extern void forLoop_t11(int low, int high, int T2, int N1, float* in3_0/* len = N1 */, float* f4_1/* len = N1 * T2 */, float* out0/* len = N1 * T2 */);
extern void test(int N);
extern void forLoop_t22(int low, int high, int T2, int i5, int N1, float* in3_0/* len = N1 */, float* f4_1/* len = N1 * T2 */, float* out0/* len = N1 * T2 */);
extern void forLoop_t13(int low, int high, int N7, int& out6);
extern void forLoop_t24(int low, int high, int& out6);
}

#endif
