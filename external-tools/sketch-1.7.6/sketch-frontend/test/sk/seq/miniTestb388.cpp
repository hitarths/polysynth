#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb388.h"
namespace ANONYMOUS{

void voo__Wrapper(int p, int n, int m, int t, int* a/* len = (p * n) * m */, int* b/* len = t */) {
  voo(p, n, m, t, a, b);
}
void voo__WrapperNospec(int p, int n, int m, int t, int* a/* len = (p * n) * m */, int* b/* len = t */) {}
void voo(int p, int n, int m, int t, int* a/* len = (p * n) * m */, int* b/* len = t */) {
  if (arrCompare(a, ((p * n) * m), b, t) && (((m) == (t)) && (((n) == (1)) && ((p) == (1))))) {
    assert ((((t) == (m)) && ((n) == (1))) && ((p) == (1)));;
    if ((m) > (0)) {
      int  _out_s1=0;
      assert ((0) < (m));;
      assert ((0) < (n));;
      int * _tt0= new int [1]; 
      CopyArr<int>(_tt0,(b[0]), 1);
      int * _tt1= new int [1]; 
      CopyArr<int>(_tt1,(a+ 0), 1, p);
      mama(1, _tt0, 1, _tt1, _out_s1);
      delete[] _tt0;
      delete[] _tt1;
    }
  }
}
void mama(int n, int* x/* len = n */, int m, int* y/* len = m */, int& _out) {
  assert ((n) == (m));;
  _out = 5;
  return;
}

}
