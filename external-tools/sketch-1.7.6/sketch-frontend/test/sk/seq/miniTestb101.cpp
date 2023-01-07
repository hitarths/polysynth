#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb101.h"
namespace ANONYMOUS{

void testSK(int i, int j, int& _out) {
  if ((i) > (8)) {
    int  _out_s1=0;
    infun((2 * i) + 1, j - 1, _out_s1);
    _out = _out_s1;
    return;
  }
  int  _out_s3=0;
  infun(i - 3, j, _out_s3);
  _out = _out_s3;
  return;
}
void test(int i, int j, int& _out) {
  if ((i) > (8)) {
    int  _out_s5=0;
    infun((i + 1) + i, j - 1, _out_s5);
    _out = _out_s5;
    return;
  }
  int  _out_s7=0;
  infun(i - 3, j, _out_s7);
  _out = _out_s7;
  return;
}
void infun(int i, int j, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
