#ifndef MINITESTB465_H
#define MINITESTB465_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n, int* x1/* len = n */, int q, int* y1/* len = q */);
extern void main__WrapperNospec(int n, int* x1/* len = n */, int q, int* y1/* len = q */);
extern void _main(int n, int* x1/* len = n */, int q, int* y1/* len = q */);
extern void foo(int n, int* x/* len = n */, int* _out/* len = n */);
}

#endif
