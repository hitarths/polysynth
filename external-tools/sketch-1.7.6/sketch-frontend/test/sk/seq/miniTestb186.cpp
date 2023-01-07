#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb186.h"
namespace ANONYMOUS{

void sk(int s, int& _out) {
  int  _out_s1=0;
  ufu(s, _out_s1);
  int  _out_s3=0;
  ufu(s + 1, _out_s3);
  _out = _out_s1 * _out_s3;
  return;
}
void faa(int s, int& _out) {
  int  _out_s5=0;
  ufu(s, _out_s5);
  int  _out_s7=0;
  ufu(s + 1, _out_s7);
  _out = _out_s5 * _out_s7;
  return;
}
void ufu(int a, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
