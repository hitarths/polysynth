#ifndef MINITESTB225_H
#define MINITESTB225_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void SLLsketch(bool* edges/* len = 2 * 2 */, bool& _out);
extern void SLLspec(bool* edges/* len = 2 * 2 */, bool& _out);
extern void sPlus(bool* rels/* len = 2 * 2 */, int x, bool* _out/* len = 2 */);
extern void s(bool* rels/* len = 2 * 2 */, int x, bool* _out/* len = 2 */);
}

#endif
