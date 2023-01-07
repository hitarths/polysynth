#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb366.h"
namespace ANONYMOUS{

void moo(int x, int& y) {
  y = x + y;
}
void foo(int x, int& y) {
  y = x + y;
}

}
