#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb459.h"
namespace ANONYMOUS{

void main2__Wrapper(int x) {
  main2(x);
}
void main2__WrapperNospec(int x) {}
void main1__Wrapper(int x) {
  main1(x);
}
void main1__WrapperNospec(int x) {}
void main2(int x_0) {
  int  x=x_0;
  x = x_0 + 1;
  x = x + 1;
  x = x + 1;
  assert ((x) > ((x_0 + 2)));;
  secretAssert((x) == ((x_0 + 3)));
}
void main1(int x_0) {
  int  x=x_0;
  x = x_0 + 1;
  x = x + 1;
  x = x + 1;
  x = x + 1;
  x = x + 1;
  x = x + 1;
  x = x + 1;
  assert ((x) > ((x_0 + 4)));;
  assert ((x) > ((x_0 + 6)));;
  secretAssert((x) == ((x_0 + 7)));
}
void secretAssert(bool b) {assert( b ); }

}
