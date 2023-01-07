#ifndef MINITESTB448_H
#define MINITESTB448_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n, int* x/* len = n */);
extern void main__WrapperNospec(int n, int* x/* len = n */);
extern void foo__Wrapper(int n, int* x/* len = n */);
extern void foo__WrapperNospec(int n, int* x/* len = n */);
extern void _main(int n, int* x/* len = n */);
extern void foo(int n, int* x_0/* len = n */, int& _out);
}

#endif
