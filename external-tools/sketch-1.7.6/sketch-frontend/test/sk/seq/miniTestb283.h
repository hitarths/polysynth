#ifndef MINITESTB283_H
#define MINITESTB283_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void karatsuba(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */);
extern void mult(int N, int* x/* len = N */, int* y/* len = N */, int* _out/* len = 2 * N */);
extern void ident(int N, int* in/* len = N */, int* _out/* len = N */);
}

#endif
