#ifndef MINITESTB388_H
#define MINITESTB388_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void voo__Wrapper(int p, int n, int m, int t, int* a/* len = (p * n) * m */, int* b/* len = t */);
extern void voo__WrapperNospec(int p, int n, int m, int t, int* a/* len = (p * n) * m */, int* b/* len = t */);
extern void voo(int p, int n, int m, int t, int* a/* len = (p * n) * m */, int* b/* len = t */);
extern void mama(int n, int* x/* len = n */, int m, int* y/* len = m */, int& _out);
}

#endif
