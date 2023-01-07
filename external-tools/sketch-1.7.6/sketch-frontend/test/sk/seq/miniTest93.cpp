#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest93.h"
namespace ANONYMOUS{

void fooSK(int x, int& _out) {
  int  _out_s1=0;
  moo(3 * x, _out_s1);
  _out = _out_s1;
  return;
}
void foo(int x, int& _out) {
  int  _out_s3=0;
  moo((x + x) + x, _out_s3);
  _out = _out_s3;
  return;
}
void moo(int x, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
