#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb231.h"
namespace ANONYMOUS{

void foo__Wrapper(int x) {
  foo(x);
}
void foo__WrapperNospec(int x) {}
void foo(int x) {
  bool _tt0[2] = {0, 0};
  int*  __sa4= new int [2 * 2]; CopyArr<int >(__sa4,_tt0, 2 * 2, 2);
  int _tt1[2] = {1, 2};
  CopyArr<int >((__sa4+ 0),_tt1, 2, 2);
  int _tt2[2] = {3, 4};
  CopyArr<int >((__sa4+ 2),_tt2, 2, 2);
  bool _tt3[3] = {0, 0, 0};
  int*  arr= new int [3 * 3]; CopyArr<int >(arr,_tt3, 3 * 3, 3);
  for (int  __sa2=0;(__sa2) < (3);__sa2 = __sa2 + 1){
    if ((__sa2) < (2)) {
      assert (((__sa2) >= (0)) && ((__sa2) < (3)));;
      assert (((__sa2) >= (0)) && ((__sa2) < (2)));;
      CopyArr<int >((arr+ 3 * __sa2),(__sa4+ 2 * __sa2), 3, 2);
    } else {
      assert (((__sa2) >= (0)) && ((__sa2) < (3)));;
      CopyArr<int >((arr+ 3 * __sa2),0, 3);
    }
  }
  bool _tt4[5] = {0, 0, 0, 0, 0};
  int*  ar2= new int [5 * 5]; CopyArr<int >(ar2,_tt4, 5 * 5, 5);
  for (int  __sa5=0;(__sa5) < (5);__sa5 = __sa5 + 1){
    if ((__sa5) < (3)) {
      assert (((__sa5) >= (0)) && ((__sa5) < (5)));;
      assert (((__sa5) >= (0)) && ((__sa5) < (3)));;
      CopyArr<int >((ar2+ 5 * __sa5),(arr+ 3 * __sa5), 5, 3);
    } else {
      assert (((__sa5) >= (0)) && ((__sa5) < (5)));;
      CopyArr<int >((ar2+ 5 * __sa5),0, 5);
    }
  }
  assert (((arr[0])) == (1));;
  assert (((arr[2])) == (0));;
  bool * _tt5= new bool [3]; 
  CopyArr<bool>(_tt5,0, 3);
  assert (arrCompare((arr+ 6), 3, _tt5, 3) && ((3) == (3)));;
  bool _tt6[3] = {0, 0, 0};
  int*  __sa9= new int [2 * 3]; CopyArr<int >(__sa9,_tt6, 2 * 3, 3);
  int _tt7[2] = {x, 0};
  CopyArr<int >((__sa9+ 0),_tt7, 2, 2);
  int _tt8[2] = {1, 2};
  CopyArr<int >((__sa9+ 2),_tt8, 2, 2);
  int _tt9[2] = {3, 4};
  CopyArr<int >((__sa9+ 4),_tt9, 2, 2);
  bool _tt10[3] = {0, 0, 0};
  int*  qrr= new int [3 * 3]; CopyArr<int >(qrr,_tt10, 3 * 3, 3);
  for (int  __sa7=0;(__sa7) < (3);__sa7 = __sa7 + 1){
    assert (((__sa7) >= (0)) && ((__sa7) < (3)));;
    assert (((__sa7) >= (0)) && ((__sa7) < (3)));;
    CopyArr<int >((qrr+ 3 * __sa7),(__sa9+ 2 * __sa7), 3, 2);
  }
  assert (((qrr[0])) == (x));;
  assert (((qrr[1])) == (0));;
  assert (((qrr[5])) == (0));;
  for (int  __sa10=0;(__sa10) < (3);__sa10 = __sa10 + 1){
    assert (((__sa10) >= (0)) && ((__sa10) < (3)));;
    CopyArr<int >((qrr+ 3 * __sa10),0, 3);
  }
  bool _tt11[2] = {0, 0};
  int*  __sa13= new int [(3 * 3) * 2]; CopyArr<int >(__sa13,_tt11, (3 * 3) * 2, 2);
  CopyArr<int >((__sa13+ 0),arr, 9, 3 * 3);
  CopyArr<int >((__sa13+ 9),qrr, 9, 3 * 3);
  bool _tt12[4] = {0, 0, 0, 0};
  int*  awesome= new int [(3 * 4) * 4]; CopyArr<int >(awesome,_tt12, (3 * 4) * 4, 4);
  for (int  __sa11=0;(__sa11) < (4);__sa11 = __sa11 + 1){
    if ((__sa11) < (2)) {
      assert (((__sa11) >= (0)) && ((__sa11) < (2)));;
      int*  __sa15= new int [3 * 3]; CopyArr<int >(__sa15,(__sa13+ 9 * __sa11), 3 * 3, 9);
      for (int  __sa14=0;(__sa14) < (4);__sa14 = __sa14 + 1){
        if ((__sa14) < (3)) {
          assert (((__sa11) >= (0)) && ((__sa11) < (4)));;
          assert (((__sa14) >= (0)) && ((__sa14) < (4)));;
          assert (((__sa14) >= (0)) && ((__sa14) < (3)));;
          CopyArr<int >((awesome+ (12 * __sa11) + (3 * __sa14)),(__sa15+ 3 * __sa14), 3, 3);
        } else {
          assert (((__sa11) >= (0)) && ((__sa11) < (4)));;
          assert (((__sa14) >= (0)) && ((__sa14) < (4)));;
          CopyArr<int >((awesome+ (12 * __sa11) + (3 * __sa14)),0, 3);
        }
      }
      delete[] __sa15;
    } else {
      for (int  __sa16=0;(__sa16) < (4);__sa16 = __sa16 + 1){
        assert (((__sa11) >= (0)) && ((__sa11) < (4)));;
        assert (((__sa16) >= (0)) && ((__sa16) < (4)));;
        CopyArr<int >((awesome+ (12 * __sa11) + (3 * __sa16)),0, 3);
      }
    }
  }
  assert (arrCompare((awesome+ 0), 9, arr, (3 * 3)) && (((3) == (3)) && ((3) == (3))));;
  delete[] __sa4;
  delete[] arr;
  delete[] ar2;
  delete[] _tt5;
  delete[] __sa9;
  delete[] qrr;
  delete[] __sa13;
  delete[] awesome;
}

}
