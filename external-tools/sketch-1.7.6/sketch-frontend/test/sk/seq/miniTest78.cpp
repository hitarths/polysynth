#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest78.h"
namespace ANONYMOUS{

void sketch(bool* in1_0/* len = 5 */, int in2, bool* _out/* len = 5 */) {
  bool*  in1= new bool [5]; CopyArr<bool >(in1,in1_0, 5, 5);
  if ((in2) < (5)) {
    (in1[in2]) = !((in1_0[in2]));
  }
  (in1[0]) = 1;
  CopyArr<bool >(_out,in1, 5, 5);
  delete[] in1;
  return;
}
void spec(bool* in1_0/* len = 5 */, int in2, bool* _out/* len = 5 */) {
  bool*  in1= new bool [5]; CopyArr<bool >(in1,in1_0, 5, 5);
  if ((in2) < (5)) {
    (in1[in2]) = !((in1_0[in2]));
  }
  (in1[0]) = 1;
  CopyArr<bool >(_out,in1, 5, 5);
  delete[] in1;
  return;
}

}
