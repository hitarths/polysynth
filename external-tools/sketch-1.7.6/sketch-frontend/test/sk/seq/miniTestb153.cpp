#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb153.h"
namespace ANONYMOUS{

void sketch(int in_0, int& _out) {
  int  in=in_0;
  bool*  _stmtPicked__s0= new bool [3]; CopyArr<bool >(_stmtPicked__s0,0, 3);
  (_stmtPicked__s0[1]) = 1;
  int*  _regenChoices__s1= new int [3]; CopyArr<int >(_regenChoices__s1,0, 3);
  (_regenChoices__s1[1]) = 0;
  (_stmtPicked__s0[2]) = 1;
  (_regenChoices__s1[2]) = 1;
  (_stmtPicked__s0[0]) = 1;
  (_regenChoices__s1[0]) = 2;
  for (int  _ix__s3=0;(_ix__s3) < (3);_ix__s3 = _ix__s3 + 1){
    if (((_regenChoices__s1[_ix__s3])) == (0)) {
      in = in * 2;
    } else {
      if (((_regenChoices__s1[_ix__s3])) == (1)) {
        in = in / 3;
      } else {
        if (((_regenChoices__s1[_ix__s3])) == (2)) {
          in = in + 1;
        }
      }
    }
  }
  _out = in;
  delete[] _stmtPicked__s0;
  delete[] _regenChoices__s1;
  return;
}
void spec(int in, int& _out) {
  _out = ((in + 1) * 2) / 3;
  return;
}

}
