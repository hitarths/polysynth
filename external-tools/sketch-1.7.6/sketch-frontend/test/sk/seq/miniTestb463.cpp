#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb463.h"
namespace ANONYMOUS{

void mm__Wrapper(int m, int* x1/* len = m */, int* x2/* len = m */, int* x3/* len = m */, int* x4/* len = m */, int* x5/* len = m */, int* x6/* len = m */) {
  mm(m, x1, x2, x3, x4, x5, x6);
}
void mm__WrapperNospec(int m, int* x1/* len = m */, int* x2/* len = m */, int* x3/* len = m */, int* x4/* len = m */, int* x5/* len = m */, int* x6/* len = m */) {}
void mm(int m, int* x1/* len = m */, int* x2/* len = m */, int* x3/* len = m */, int* x4/* len = m */, int* x5/* len = m */, int* x6/* len = m */) {
  assert (arrCompare(x3, m, x3, m) && ((m) == (m)));;
}

}
