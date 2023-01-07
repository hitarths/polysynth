#ifndef MINITESTB256_H
#define MINITESTB256_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void skMGinter(int N, bool* in/* len = N * N */, bool half, bool fourth, bool* _out/* len = (2 * N) * (2 * N) */);
extern void MGinter(int N, bool* in/* len = N * N */, bool half, bool fourth, bool* _out/* len = (2 * N) * (2 * N) */);
}

#endif
