#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb220.h"
namespace ANONYMOUS{

void test3__Wrapper() {
  test3();
}
void test3__WrapperNospec() {}
void test2__Wrapper() {
  test2();
}
void test2__WrapperNospec() {}
void test1__Wrapper() {
  test1();
}
void test1__WrapperNospec() {}
void test3() {
  bool _tt0[4] = {0, 0, 0, 0};
  bool*  t_s1= new bool [4]; CopyArr<bool >(t_s1,_tt0, 4, 4);
  foo(t_s1);
  assert ((!((t_s1[2])) || (t_s1[3])) ^ !((t_s1[2])));;
  delete[] t_s1;
}
void test2() {
  bool _tt1[4] = {0, 0, 0, 0};
  bool*  t_s3= new bool [4]; CopyArr<bool >(t_s3,_tt1, 4, 4);
  foo(t_s3);
  assert ((!((t_s3[2])) || (t_s3[3])) ^ (t_s3[1]));;
  bool _tt2[4] = {0, 0, 0, 0};
  bool*  qq= new bool [4]; CopyArr<bool >(qq,_tt2, 4, 4);
  bool * _tt3= new bool [4]; 
  CopyArr<bool>(_tt3,0, 4);
  assert (arrCompare(qq, 4, _tt3, 4) && ((4) == (4)));;
  delete[] t_s3;
  delete[] qq;
  delete[] _tt3;
}
void test1() {
  bool _tt4[4] = {0, 0, 0, 0};
  bool*  t_s5= new bool [4]; CopyArr<bool >(t_s5,_tt4, 4, 4);
  foo(t_s5);
  assert (!((t_s5[0])) || (t_s5[2]));;
  assert (!((t_s5[1])) || (t_s5[4]));;
  delete[] t_s5;
}
void foo(bool* _out/* len = 4 */) {
  bool _tt5[4] = {0, 0, 1, 1};
  CopyArr<bool >(_out,_tt5, 4, 4);
  return;
}

}
