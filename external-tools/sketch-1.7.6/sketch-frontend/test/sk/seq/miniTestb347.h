#ifndef MINITESTB347_H
#define MINITESTB347_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void karatsuba(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */);
extern void mult(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */);
extern void minus(int N, int* t/* len = N */, int* _out/* len = N */);
extern void plus(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = N */);
extern void shiftVect(int N, int* in/* len = N */, int s, int* _out/* len = N */);
extern void normalize(int N, int* in/* len = N */, int* _out/* len = N */);
extern void sgn(int i, int& _out);
}

#endif
