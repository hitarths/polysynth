#ifndef MINITESTB407_H
#define MINITESTB407_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void main__Wrapper(int x, int* y/* len = x */);
extern void main__WrapperNospec(int x, int* y/* len = x */);
extern void _main(int x, int* y/* len = x */);
extern void foo(int x, int& _out);
extern void boo(int x, int* _out/* len = x */);
extern void moo(int x, int& _out);
extern void mar(int x, int& _out);
extern void bar(int x, int& _out);
extern void tar(int x0, int& _out);
}

#endif
