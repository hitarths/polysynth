#ifndef MINITESTB284_H
#define MINITESTB284_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void test__Wrapper();
extern void test__WrapperNospec();
extern void main__Wrapper(int N, int* in/* len = N */);
extern void main__WrapperNospec(int N, int* in/* len = N */);
extern void test();
extern void _main(int N, int* in/* len = N */);
}

#endif
