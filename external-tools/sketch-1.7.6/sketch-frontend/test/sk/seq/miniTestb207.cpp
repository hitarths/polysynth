#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTestb207.h"
namespace ANONYMOUS{

void sketch(bool* in/* len = 2 */, bool* _out/* len = 4 */) {
  bool _tt0[4] = {0, 0, 0, 0};
  bool*  _out_s1= new bool [4]; CopyArr<bool >(_out_s1,_tt0, 4, 4);
  tutu(in, 2, _out_s1);
  CopyArr<bool >(_out,_out_s1, 4, 4);
  delete[] _out_s1;
  return;
}
void spec(bool* in/* len = 2 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,in, 4, 2);
  return;
}
void tutu(bool* in/* len = 2 */, int n, bool* _out/* len = 4 */) {
  if ((n) > (0)) {
    bool _tt1[4] = {0, 0, 0, 0};
    bool*  _out_s3= new bool [4]; CopyArr<bool >(_out_s3,_tt1, 4, 4);
    tutu(in, n - 1, _out_s3);
    CopyArr<bool >(_out,_out_s3, 4, 4);
    delete[] _out_s3;
    return;
  } else {
    bool _tt2[4] = {0, 0, 0, 0};
    bool*  _out_s5= new bool [4]; CopyArr<bool >(_out_s5,_tt2, 4, 4);
    rvbit(in, _out_s5);
    CopyArr<bool >(_out,_out_s5, 4, 4);
    delete[] _out_s5;
    return;
  }
}
void rvbit(bool* in/* len = 2 */, bool* _out/* len = 4 */) {
  bool * _tt3= new bool [4]; 
  bool _tt4[4] = {0, 0, 0, 0};
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt3, 4, in, 2, _tt4, 4), 4, 4);
  delete[] _tt3;
  return;
}

}
