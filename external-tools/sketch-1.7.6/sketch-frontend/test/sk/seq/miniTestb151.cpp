#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb151.h"
namespace ANONYMOUS{

void sketch(bool in, int a, int b, bool& _out) {
  int  x=0;
  int  y=0;
  if (in) {
    x = b;
    y = b;
  } else {
    x = a;
    y = a;
  }
  _out = ((in && ((x) == (b))) && ((y) == (b))) || ((!(in) && ((x) == (a))) && ((y) == (a)));
  return;
}
void spec(bool in, int a, int b, bool& _out) {
  _out = 1;
  return;
}

}
