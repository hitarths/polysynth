#ifndef MINITESTB420_H
#define MINITESTB420_H

#include <cstring>

#include "vops.h"

namespace Foo{
}
namespace Foo{
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
extern void test(int n, int* x/* len = n */, int* _out/* len = n */);
}

#endif
