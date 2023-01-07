#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb137.h"
namespace ANONYMOUS{

void sk(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h, bool i, bool j, bool k, bool l, bool m, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  (_out[0]) = (a & (b & c)) & ((((d & e) & f) & g) & h);
  (_out[1]) = ((((((c & d) & (e & f)) & g) & (h & i)) & j) & (k & l)) & m;
  (_out[2]) = ((i & f) & (g & h)) & (j & e);
  (_out[3]) = ((f & h) & g) & i;
  return;
}
void test(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h, bool i, bool j, bool k, bool l, bool m, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  (_out[0]) = ((a & b) & (((f & (g & h)) & c) & d)) & e;
  (_out[1]) = ((c & d) & ((h & (i & j)) & k)) & ((((e & f) & g) & l) & m);
  (_out[2]) = ((e & h) & (i & g)) & (j & f);
  (_out[3]) = (i & h) & (g & f);
  return;
}

}
