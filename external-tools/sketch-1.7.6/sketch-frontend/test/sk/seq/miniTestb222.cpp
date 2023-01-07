#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb222.h"
namespace ANONYMOUS{

void test2__Wrapper() {
  test2();
}
void test2__WrapperNospec() {}
void test1__Wrapper() {
  test1();
}
void test1__WrapperNospec() {}
void test2() {
  int  _out_s1=0;
  hole2(_out_s1);
  assert ((_out_s1) == (5));;
}
void test1() {
  int  _out_s3=0;
  hole1(_out_s3);
  int  _out_s5=0;
  hole2(_out_s5);
  assert (((_out_s3 + _out_s5)) == (10));;
}
void hole2(int& _out) {
  _out = 5;
  return;
}
void hole1(int& _out) {
  _out = 5;
  return;
}

}
