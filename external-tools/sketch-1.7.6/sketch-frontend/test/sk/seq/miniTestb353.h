#ifndef MINITESTB353_H
#define MINITESTB353_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void myfile__Wrapper(int* tt/* len = 5 */);
extern void myfile__WrapperNospec(int* tt/* len = 5 */);
extern void myfile(int* tt/* len = 5 */);
extern void foo();
extern void moo();
extern void too(int& x);
extern void sel(int* t/* len = 5 */, int& x, int& _out);
}

#endif
