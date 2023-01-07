#ifndef MINITESTB375_H
#define MINITESTB375_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void foo__Wrapper(int N, int* in/* len = N */, int i);
extern void foo__WrapperNospec(int N, int* in/* len = N */, int i);
extern void foo(int N, int* in/* len = N */, int i);
extern void select_pred(int N, int* A/* len = N */, int& sz, int* _out/* len = N */);
extern void pred(int x, bool& _out);
}

#endif
