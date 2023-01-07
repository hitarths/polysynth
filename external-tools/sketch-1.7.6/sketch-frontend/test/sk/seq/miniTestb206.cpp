#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb206.h"
namespace ANONYMOUS{

void sk(bool* in_0/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  in= new bool [5]; CopyArr<bool >(in,in_0, 5, 5);
  bool*  t= new bool [2]; CopyArr<bool >(t,(in_0+ 0), 2, 2);
  CopyArr<bool >((in+ 1),t, 2, 2);
  CopyArr<bool >(_out,in, 5, 5);
  delete[] in;
  delete[] t;
  return;
}
void spec(bool* in_0/* len = 5 */, bool* _out/* len = 5 */) {
  bool*  in= new bool [5]; CopyArr<bool >(in,in_0, 5, 5);
  CopyArr<bool >((in+ 1),(in_0+ 0), 2, 2);
  CopyArr<bool >(_out,in, 5, 5);
  delete[] in;
  return;
}

}
