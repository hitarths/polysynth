#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb157.h"
namespace ANONYMOUS{

void testSK0(bool* a/* len = 2 * 2 */, bool* _out/* len = 2 * 2 */) {
  for (int  __sa0=0;(__sa0) < (2);__sa0 = __sa0 + 1){
    assert (((__sa0) >= (0)) && ((__sa0) < (2)));;
    CopyArr<bool >((_out+ 2 * __sa0),0, 2);
  }
  for (int  __sa1=0;(__sa1) < (2);__sa1 = __sa1 + 1){
    assert (((__sa1) >= (0)) && ((__sa1) < (2)));;
    CopyArr<bool >((_out+ 2 * __sa1),0, 2);
  }
  for (int  i=0;(i) < (2);i = i + 1){
    for (int  j=0;(j) < (i);j = j + 1){
      assert (((i) >= (0)) && ((i) < (2)));;
      assert (((j) >= (0)) && ((j) < (2)));;
      assert (((i) >= (0)) && ((i) < (2)));;
      assert (((j) >= (0)) && ((j) < (2)));;
      (_out[(2 * i) + j]) = (a[(2 * i) + j]);
    }
  }
  return;
}
void test0(bool* a/* len = 2 * 2 */, bool* _out/* len = 2 * 2 */) {
  for (int  __sa2=0;(__sa2) < (2);__sa2 = __sa2 + 1){
    assert (((__sa2) >= (0)) && ((__sa2) < (2)));;
    CopyArr<bool >((_out+ 2 * __sa2),0, 2);
  }
  for (int  __sa3=0;(__sa3) < (2);__sa3 = __sa3 + 1){
    assert (((__sa3) >= (0)) && ((__sa3) < (2)));;
    CopyArr<bool >((_out+ 2 * __sa3),0, 2);
  }
  for (int  i=0;(i) < (2);i = i + 1){
    for (int  j=0;(j) < (i);j = j + 1){
      assert (((i) >= (0)) && ((i) < (2)));;
      assert (((j) >= (0)) && ((j) < (2)));;
      assert (((i) >= (0)) && ((i) < (2)));;
      assert (((j) >= (0)) && ((j) < (2)));;
      (_out[(2 * i) + j]) = (a[(2 * i) + j]);
    }
  }
  return;
}

}
