#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb345.h"
namespace ANONYMOUS{

void main__Wrapper(int i) {
  _main(i);
}
void main__WrapperNospec(int i) {}
void _main(int i) {
  int _tt0[12] = {0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 7};
  int*  v= new int [3 * 4]; CopyArr<int >(v,_tt0, 3 * 4, 12);
  assert (((v[0])) == (0));;
  assert (((v[11])) == (7));;
  assert (((v[8])) == (3));;
  bool _tt1[3] = {0, 0, 0};
  int*  tt= new int [3]; CopyArr<int >(tt,_tt1, 3, 3);
  bool _tt2[4] = {0, 0, 0, 0};
  int*  __sa0= new int [3 * 4]; CopyArr<int >(__sa0,_tt2, 3 * 4, 4);
  CopyArr<int >((__sa0+ 0),tt, 3, 3);
  bool _tt3[3] = {0, 0, 0};
  CopyArr<int >((__sa0+ 3),_tt3, 3, 3);
  bool _tt4[3] = {0, 0, 0};
  CopyArr<int >((__sa0+ 6),_tt4, 3, 3);
  CopyArr<int >((__sa0+ 9),tt, 3, 3);
  assert ((((((i + 1) - i) + 2)) >= (0)) && (((((i + 1) - i) + 2)) < (4)));;
  assert (arrCompare((__sa0+ (3 * (((i + 1) - i) + 2))), 3, (__sa0+ 3), 3) && ((3) == (3)));;
  bool _tt5[2] = {0, 0};
  int*  ty= new int [2]; CopyArr<int >(ty,_tt5, 2, 2);
  bool _tt6[4] = {0, 0, 0, 0};
  int*  __sa1= new int [3 * 4]; CopyArr<int >(__sa1,_tt6, 3 * 4, 4);
  int _tt7[3] = {1, 2, 3};
  CopyArr<int >((__sa1+ 0),_tt7, 3, 3);
  CopyArr<int >((__sa1+ 3),ty, 3, 2);
  bool _tt8[3] = {0, 0, 0};
  CopyArr<int >((__sa1+ 6),_tt8, 3, 3);
  bool _tt9[3] = {0, 0, 0};
  CopyArr<int >((__sa1+ 9),_tt9, 3, 3);
  assert ((((((i + 1) - i) + 2)) >= (0)) && (((((i + 1) - i) + 2)) < (4)));;
  assert (arrCompare((__sa1+ (3 * (((i + 1) - i) + 2))), 3, (__sa0+ 3), 3) && ((3) == (3)));;
  delete[] v;
  delete[] tt;
  delete[] __sa0;
  delete[] ty;
  delete[] __sa1;
}

}
