#ifndef MINITESTB467_H
#define MINITESTB467_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n);
extern void main__WrapperNospec(int n);
extern void _main(int n);
extern void qq(int n, int* _out/* len = n */);
extern void cp(int n, int* in/* len = n */, int* _out/* len = n */);
extern void add(int n, int* in/* len = n */, int* _out/* len = n + 1 */);
}

#endif
