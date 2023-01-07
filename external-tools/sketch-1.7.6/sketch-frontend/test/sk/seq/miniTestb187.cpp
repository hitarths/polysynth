#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb187.h"
namespace ANONYMOUS{

void sk(int idx, int N, int& _out) {
  if (((idx) >= (0)) && ((idx) < ((N - 3)))) {
    int  _out_s1=0;
    ufun(idx + 3, _out_s1);
    _out = _out_s1;
    return;
  } else {
    _out = 0;
    return;
  }
}
void spec(int idx, int N, int& _out) {
  if (((idx) >= (0)) && ((idx) < ((N - 3)))) {
    int  _out_s3=0;
    ufun(idx + 3, _out_s3);
    _out = _out_s3;
    return;
  } else {
    _out = 0;
    return;
  }
}
void ufun(int idx, int& _out) { 
	/* This was defined as an uninterpreted function. 
	   Add your own body here. */ 
	_out = 0;

}

}
