#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb377.h"
namespace ANONYMOUS{

void sketch__Wrapper(int i, int lenL, int* L/* len = lenL */, int lenRet, int* ret/* len = lenRet */) {
  sketch(i, lenL, L, lenRet, ret);
}
void sketch__WrapperNospec(int i, int lenL, int* L/* len = lenL */, int lenRet, int* ret/* len = lenRet */) {}
void sketch(int i, int lenL, int* L/* len = lenL */, int lenRet, int* ret/* len = lenRet */) {
  bool  _out_s4=0;
  invariant(0, (ret+ 0), lenL, L, 0, _out_s4);
  assert (_out_s4);;
  bool  _pac_sc_s5_s7=0;
  invariant(lenRet, ret, lenL, L, i, _pac_sc_s5_s7);
  bool  _pac_sc_s5=0;
  _pac_sc_s5 = _pac_sc_s5_s7;
  if (_pac_sc_s5_s7) {
    _pac_sc_s5 = (i) < (lenL);
  }
  if (_pac_sc_s5) {
    int*  _out_s9= new int [lenRet + 1]; CopyArr<int >(_out_s9,0, lenRet + 1);
    append((L[i]), lenRet, ret, _out_s9);
    bool  _out_s11=0;
    invariant(lenRet + 1, _out_s9, lenL, L, i + 1, _out_s11);
    assert (_out_s11);;
  }
  bool  _pac_sc_s12_s14=0;
  invariant(lenRet, ret, lenL, L, i, _pac_sc_s12_s14);
  bool  _pac_sc_s12=0;
  _pac_sc_s12 = _pac_sc_s12_s14;
  if (_pac_sc_s12_s14) {
    _pac_sc_s12 = !((i) < (lenL));
  }
  if (_pac_sc_s12) {
    assert ((arrCompare(ret, lenRet, L, lenL) && ((lenRet) == (lenL))) && ((lenRet) == (lenL)));;
    bool  _out_s16=0;
    postCondition(lenRet, ret, lenL, L, i, _out_s16);
    assert (_out_s16);;
  }
}
void invariant(int lenRet, int* ret/* len = lenRet */, int lenL, int* L/* len = lenL */, int i, bool& _out) {
  int*  p_s43= new int [i]; CopyArr<int >(p_s43,0, i);
  top(i, lenL, L, p_s43);
  bool  p_s45=0;
  equals(lenRet, ret, i, p_s43, p_s45);
  int*  p_s43_0= new int [i]; CopyArr<int >(p_s43_0,0, i);
  top(i, lenL, L, p_s43_0);
  bool  p_s45_0=0;
  equals(lenRet, ret, i, p_s43_0, p_s45_0);
  _out = p_s45 & (((lenL + 13)) > ((i + 12)));
  delete[] p_s43;
  delete[] p_s43_0;
  return;
}
void append(int v, int N, int* A/* len = N */, int* _out/* len = N + 1 */) {
  CopyArr<int >(_out,0, N + 1);
  CopyArr<int >((_out+ 0),A, N, N);
  (_out[N]) = v;
  return;
}
void postCondition(int lenRet, int* ret/* len = lenRet */, int lenL, int* L/* len = lenL */, int i, bool& _out) {
  bool  _out_s19=0;
  equals(lenRet, ret, lenL, L, _out_s19);
  _out = _out_s19;
  return;
}
void top(int T, int N, int* A/* len = N */, int* _out/* len = T */) {
  if ((T) <= (N)) {
    CopyArr<int >(_out,(A+ 0), T, T);
    return;
  } else {
    CopyArr<int >(_out,0, T);
    return;
  }
}
void equals(int l1Len, int* l1/* len = l1Len */, int l2Len, int* l2/* len = l2Len */, bool& _out) {
  _out = (arrCompare(l1, l1Len, l2, l2Len) && ((l1Len) == (l2Len))) && ((l1Len) == (l2Len));
  return;
}

}
