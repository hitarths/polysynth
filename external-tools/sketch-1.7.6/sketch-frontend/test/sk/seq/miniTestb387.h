#ifndef MINITESTB387_H
#define MINITESTB387_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void foo__Wrapper(int m, int* x/* len = m */, int n, int* y/* len = n */, int* z/* len = 7 */);
extern void foo__WrapperNospec(int m, int* x/* len = m */, int n, int* y/* len = n */, int* z/* len = 7 */);
extern void moo__Wrapper(int n, int* x/* len = n */);
extern void moo__WrapperNospec(int n, int* x/* len = n */);
extern void too__Wrapper(int m, int n, int* x/* len = n * m */, int* y/* len = n * m */, int* z/* len = m * n */);
extern void too__WrapperNospec(int m, int n, int* x/* len = n * m */, int* y/* len = n * m */, int* z/* len = m * n */);
extern void foo(int m, int* x/* len = m */, int n, int* y/* len = n */, int* z/* len = 7 */);
extern void moo(int n, int* x/* len = n */);
extern void too(int m, int n, int* x/* len = n * m */, int* y/* len = n * m */, int* z/* len = m * n */);
}

#endif
