#ifndef MINITESTB290_H
#define MINITESTB290_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace FOO{
}
namespace BOO_MOO{
}
namespace ANONYMOUS{
extern void test__Wrapper(int a, int b);
extern void test__WrapperNospec(int a, int b);
extern void test(int a, int b);
}
namespace FOO{
extern void foo(int x, int& _out);
}
namespace BOO_MOO{
extern void moo(int y, int& _out);
}

#endif
