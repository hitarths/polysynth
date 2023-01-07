#ifndef MINITESTB370_H
#define MINITESTB370_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void foo__Wrapper(int A, int B, int C, int* ar/* len = (A * B) * C */, int* part/* len = 2 */, int x, int y);
extern void foo__WrapperNospec(int A, int B, int C, int* ar/* len = (A * B) * C */, int* part/* len = 2 */, int x, int y);
extern void foo(int A, int B, int C, int* ar/* len = (A * B) * C */, int* part/* len = 2 */, int x, int y);
}

#endif
