#ifndef MINITESTB271_H
#define MINITESTB271_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void tiledTranspose(int N, int P, bool* input/* len = N * N */, bool* _out/* len = N * N */);
extern void transpose(int N, int P, bool* input/* len = N * N */, bool* _out/* len = N * N */);
}

#endif
