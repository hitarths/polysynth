#ifndef MINITESTB350_H
#define MINITESTB350_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int n, int* in/* len = n */);
extern void main__WrapperNospec(int n, int* in/* len = n */);
extern void _main(int n, int* in/* len = n */);
extern void addone(int n, int* in/* len = n */, int* _out/* len = n + 1 */);
}

#endif
