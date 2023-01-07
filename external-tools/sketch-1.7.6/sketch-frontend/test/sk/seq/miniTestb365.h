#ifndef MINITESTB365_H
#define MINITESTB365_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void avgGood(bool* x/* len = 5 */, bool* y/* len = 5 */, bool* _out/* len = 5 */);
extern void avg(bool* x/* len = 5 */, bool* y/* len = 5 */, bool* _out/* len = 5 */);
extern void minus(int T, bool* x/* len = T */, bool* _out/* len = T */);
extern void div2(int T, bool* x/* len = T */, bool* _out/* len = T */);
}

#endif
