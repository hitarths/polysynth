#ifndef MINITESTB377_H
#define MINITESTB377_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
}
namespace ANONYMOUS{
extern void sketch__Wrapper(int i, int lenL, int* L/* len = lenL */, int lenRet, int* ret/* len = lenRet */);
extern void sketch__WrapperNospec(int i, int lenL, int* L/* len = lenL */, int lenRet, int* ret/* len = lenRet */);
extern void sketch(int i, int lenL, int* L/* len = lenL */, int lenRet, int* ret/* len = lenRet */);
extern void invariant(int lenRet, int* ret/* len = lenRet */, int lenL, int* L/* len = lenL */, int i, bool& _out);
extern void append(int v, int N, int* A/* len = N */, int* _out/* len = N + 1 */);
extern void postCondition(int lenRet, int* ret/* len = lenRet */, int lenL, int* L/* len = lenL */, int i, bool& _out);
extern void top(int T, int N, int* A/* len = N */, int* _out/* len = T */);
extern void equals(int l1Len, int* l1/* len = l1Len */, int l2Len, int* l2/* len = l2Len */, bool& _out);
}

#endif
