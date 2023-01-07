#ifndef MINITESTB348_H
#define MINITESTB348_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int N, int M, int* x/* len = N * M */);
extern void main__WrapperNospec(int N, int M, int* x/* len = N * M */);
extern void _main(int N, int M, int* x/* len = N * M */);
extern void square(int N, int M, int* x/* len = N * M */, int* _out/* len = N * N */);
}

#endif
