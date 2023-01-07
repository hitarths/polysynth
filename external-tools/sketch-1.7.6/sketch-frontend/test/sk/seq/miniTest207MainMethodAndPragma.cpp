#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest207MainMethodAndPragma.h"
namespace ANONYMOUS{

void main2__Wrapper(int x) {
  int  _out_s1=0;
  main2(x, _out_s1);
}
void main2__WrapperNospec(int x) {}
void main1__Wrapper(int x) {
  main1(x);
}
void main1__WrapperNospec(int x) {}
void main2(int x, int& _out) {
  _out = 1;
  return;
}
void main1(int x) {
  assert ((((x - x) + 3)) == (3));;
}

}
