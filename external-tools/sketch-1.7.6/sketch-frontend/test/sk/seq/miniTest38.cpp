#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest38.h"
namespace ANONYMOUS{

void miniTestSK(bool* in_0/* len = 4 */, bool* in2/* len = 2 */, bool* _out/* len = 4 */) {
  bool*  in= new bool [4]; CopyArr<bool >(in,in_0, 4, 4);
  int  i=0;
  i = bvToInt(in2, 2);
  (in[i]) = 1;
  CopyArr<bool >(_out,in, 4, 4);
  delete[] in;
  return;
}
void miniTest(bool* in_0/* len = 4 */, bool* in2/* len = 2 */, bool* _out/* len = 4 */) {
  bool*  in= new bool [4]; CopyArr<bool >(in,in_0, 4, 4);
  int  i=0;
  i = bvToInt(in2, 2);
  (in[i]) = 1;
  CopyArr<bool >(_out,in, 4, 4);
  delete[] in;
  return;
}

}
