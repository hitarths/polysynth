#ifndef MINITESTB361_H
#define MINITESTB361_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n, bool* x/* len = n */, int i);
extern void main__WrapperNospec(int n, bool* x/* len = n */, int i);
extern void _main(int n, bool* x/* len = n */, int i);
extern void foo(int k, bool* x/* len = k */, int* _out/* len = k */);
}

#endif
