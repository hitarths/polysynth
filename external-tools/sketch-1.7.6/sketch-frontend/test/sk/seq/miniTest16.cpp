#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest16.h"
namespace ANONYMOUS{

void reverseSketch(bool* in_0/* len = 4 */, bool* _out/* len = 4 */) {
  bool*  in= new bool [4]; CopyArr<bool >(in,in_0, 4, 4);
  (in[0]) = 0;
  CopyArr<bool >(_out,in, 4, 4);
  delete[] in;
  return;
}
void reverse(bool* in_0/* len = 4 */, bool* _out/* len = 4 */) {
  bool*  in= new bool [4]; CopyArr<bool >(in,in_0, 4, 4);
  (in[0]) = 0;
  CopyArr<bool >(_out,in, 4, 4);
  delete[] in;
  return;
}

}
