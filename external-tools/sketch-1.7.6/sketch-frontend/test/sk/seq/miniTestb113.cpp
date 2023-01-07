#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb113.h"
namespace ANONYMOUS{

void testSK(int i, int j, bool& _out) {
  bool _tt0[3] = {0, 0, 0};
  bool*  T= new bool [2 * 3]; CopyArr<bool >(T,_tt0, 2 * 3, 3);
  for (int  __sa0=0;(__sa0) < (3);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (3)));;
    CopyArr<bool >((T+ 2 * __sa0),0, 2);
  }
  (T[5]) = 1;
  if (((j) < (2)) && ((i) < (3))) {
    assert (((i) >= (0)) && ((i) < (3)));;
    assert (((j) >= (0)) && ((j) < (2)));;
    _out = (T[(2 * i) + j]);
  delete[] T;
    return;
  }
  _out = (T[5]);
  delete[] T;
  return;
}
void test(int i, int j, bool& _out) {
  bool _tt1[3] = {0, 0, 0};
  bool*  T= new bool [2 * 3]; CopyArr<bool >(T,_tt1, 2 * 3, 3);
  for (int  __sa1=0;(__sa1) < (3);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (3)));;
    CopyArr<bool >((T+ 2 * __sa1),0, 2);
  }
  (T[5]) = 1;
  if (((j) < (2)) && ((i) < (3))) {
    assert (((i) >= (0)) && ((i) < (3)));;
    assert (((j) >= (0)) && ((j) < (2)));;
    _out = (T[(2 * i) + j]);
  delete[] T;
    return;
  }
  _out = (T[5]);
  delete[] T;
  return;
}

}
