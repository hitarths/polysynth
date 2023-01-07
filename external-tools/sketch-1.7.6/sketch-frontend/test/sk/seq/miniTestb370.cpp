#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb370.h"
namespace ANONYMOUS{

void foo__Wrapper(int A, int B, int C, int* ar/* len = (A * B) * C */, int* part/* len = 2 */, int x, int y) {
  foo(A, B, C, ar, part, x, y);
}
void foo__WrapperNospec(int A, int B, int C, int* ar/* len = (A * B) * C */, int* part/* len = 2 */, int x, int y) {}
void foo(int A, int B, int C, int* ar/* len = (A * B) * C */, int* part/* len = 2 */, int x, int y) {
  if ((((((part[0])) > (0)) && (((part[1])) > (0))) && ((((part[0]) + x)) < (B))) && ((((part[1]) + y)) < (C))) {
    int*  test= new int [(A * (part[0])) * (part[1])]; CopyArr<int >(test,0, (A * (part[0])) * (part[1]));
    for (int  i=0;((i) < ((part[1]))) && ((i) < (8));i = i + 1){
      assert (((i) >= (0)) && ((i) < ((part[1]))));;
      assert ((((y + i)) >= (0)) && (((y + i)) < (C)));;
      assert (((x) >= (0)) && (((x + (part[0]))) <= (B)));;
      CopyArr<int >((test+ (A * (part[0])) * i),(ar+ ((A * B) * (y + i)) + (A * x)), A * (part[0]), (part[0]) * A);
    }
    for (int  i_0=0;((i_0) < (A)) && ((i_0) < (9));i_0 = i_0 + 1){
      for (int  j=0;((j) < ((part[0]))) && ((j) < (9));j = j + 1){
        for (int  k=0;((k) < ((part[1]))) && ((k) < (9));k = k + 1){
          assert (((k) >= (0)) && ((k) < ((part[1]))));;
          assert (((j) >= (0)) && ((j) < ((part[0]))));;
          assert (((i_0) >= (0)) && ((i_0) < (A)));;
          assert ((((y + k)) >= (0)) && (((y + k)) < (C)));;
          assert ((((x + j)) >= (0)) && (((x + j)) < (B)));;
          assert (((i_0) >= (0)) && ((i_0) < (A)));;
          assert (((test[((((A * (part[0])) * k) + (A * j)) + i_0)])) == ((ar[((((A * B) * (y + k)) + (A * (x + j))) + i_0)])));;
        }
      }
    }
    delete[] test;
  }
}

}
