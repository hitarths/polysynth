#ifndef MINITESTB293_H
#define MINITESTB293_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace BOOPKG{
}
namespace ANONYMOUS{
extern void test__Wrapper(int a, int b);
extern void test__WrapperNospec(int a, int b);
extern void test(int a, int b);
extern void boo_foo(int x, int y, int& _out);
}
namespace BOOPKG{
extern void foo(int x, int& _out);
extern void boo(int x, int& _out);
}

#endif
