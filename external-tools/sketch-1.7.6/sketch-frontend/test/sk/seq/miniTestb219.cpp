#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb219.h"
namespace ANONYMOUS{

void lala__Wrapper(int x) {
  lala(x);
}
void lala__WrapperNospec(int x) {}
void lala(int x) {
  assert (((x * 2)) == ((x + x)));;
}

}
