#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest56.h"
namespace ANONYMOUS{

void normalRoundsk(bool* in/* len = 32 */, bool* _out/* len = 32 */) {
  CopyArr<bool >(_out,0, 32);
  bool  _out_s1=1;
  for (int  i=0;(i) < (32);i = i + 1){
    _out_s1 = _out_s1 & !((in[i]));
  }
  if (_out_s1) {
    bool _tt0[32] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CopyArr<bool >(_out,_tt0, 32, 32);
  }
  return;
}
void normalRound(bool* in/* len = 32 */, bool* _out/* len = 32 */) {
  CopyArr<bool >(_out,0, 32);
  bool  _out_s3=1;
  for (int  i=0;(i) < (32);i = i + 1){
    _out_s3 = _out_s3 & !((in[i]));
  }
  if (_out_s3) {
    CopyArr<bool >(_out,1, 32);
  }
  return;
}

}
