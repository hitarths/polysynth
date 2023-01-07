#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb203.h"
namespace ANONYMOUS{

void main_fun(int a, int b) {
  int  _out_s1=0;
  if (((a) >= (0)) && ((a) < ((b - 3)))) {
    int  _out_s19=0;
    ufun(a + 3, _out_s19);
    _out_s1 = _out_s19;
  } else {
    _out_s1 = 0;
  }
  int  _out_s3=0;
  if (((a) >= (0)) && ((a) < ((b - 3)))) {
    int  _out_s17=0;
    ufun(a + 3, _out_s17);
    _out_s3 = _out_s17;
  } else {
    _out_s3 = 0;
  }
  assert ((_out_s1) == (_out_s3));;
  int  idx=a + 6;
  int  _out_s5=0;
  if (((idx) >= (0)) && ((idx) < ((b - 3)))) {
    int  _out_s19_0=0;
    ufun(idx + 3, _out_s19_0);
    _out_s5 = _out_s19_0;
  } else {
    _out_s5 = 0;
  }
  int  _out_s7=0;
  if (((a) >= (0)) && ((a) < (((b + 5) - 14)))) {
    int  _out_s17_0=0;
    ufun(a + 9, _out_s17_0);
    _out_s7 = _out_s17_0;
  } else {
    _out_s7 = 0;
  }
  assert ((_out_s5) == (_out_s7));;
  int  _out_s9=0;
  if (((a) >= (0)) && ((a) < ((b - 3)))) {
    int  _out_s19_1=0;
    ufun(a + 3, _out_s19_1);
    _out_s9 = _out_s19_1;
  } else {
    _out_s9 = 0;
  }
  int  _out_s11=0;
  if (((a) >= (0)) && ((a) < (((b + 4) - 7)))) {
    int  _out_s17_1=0;
    ufun(a + 3, _out_s17_1);
    _out_s11 = _out_s17_1;
  } else {
    _out_s11 = 0;
  }
  assert ((_out_s9) == (_out_s11));;
  if ((a) == (6)) {
    if ((b) == (16)) {
      assert (!((a) != (6)));;
    }
  }
  int  idx_0=a + 2;
  int  _out_s13=0;
  if (((idx_0) >= (0)) && ((idx_0) < ((b - 3)))) {
    int  _out_s19_2=0;
    ufun(idx_0 + 3, _out_s19_2);
    _out_s13 = _out_s19_2;
  } else {
    _out_s13 = 0;
  }
  int  _out_s15=0;
  if (((a) >= (0)) && ((a) < ((b - 5)))) {
    int  _out_s17_2=0;
    ufun(a + 5, _out_s17_2);
    _out_s15 = _out_s17_2;
  } else {
    _out_s15 = 0;
  }
  assert ((_out_s13) == (_out_s15));;
}
void VOID(int a, int b) {}
void ufun(int idx, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
