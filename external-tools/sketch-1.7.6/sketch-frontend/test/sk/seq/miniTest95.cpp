#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest95.h"
namespace ANONYMOUS{

void sklog2(bool* in_0/* len = 4 */, bool* _out/* len = 4 */) {
  bool*  in= new bool [4]; CopyArr<bool >(in,in_0, 4, 4);
  CopyArr<bool >(_out,0, 4);
  bool * _tt0= new bool [4]; 
  bool _tt1[4] = {0, 0, 1, 1};
  bool*  in_0_0= new bool [4]; CopyArr<bool >(in_0_0,bitwise(logical_and<bool>(), _tt0, 4, in_0, 4, _tt1, 4), 4, 4);
  bool  _out_s1=1;
  for (int  i=0;(i) < (4);i = i + 1){
    _out_s1 = _out_s1 & !((in_0_0[i]));
  }
  if (!(_out_s1)) {
    bool * _tt2= new bool [4]; CopyArr<bool >(_tt2,in_0, 4, 4); 
    CopyArr<bool >(in,shR(_tt2, 4, 2), 4, 4);
    bool * _tt3= new bool [4]; 
    bool _tt4[4] = {0, 1, 0, 0};
    CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt3, 4, _out, 4, _tt4, 4), 4, 4);
    delete[] _tt2;
    delete[] _tt3;
  }
  bool * _tt5= new bool [4]; 
  bool _tt6[4] = {0, 1, 0, 1};
  bool*  in_1= new bool [4]; CopyArr<bool >(in_1,bitwise(logical_and<bool>(), _tt5, 4, in, 4, _tt6, 4), 4, 4);
  bool  _out_s3=1;
  for (int  i_0=0;(i_0) < (4);i_0 = i_0 + 1){
    _out_s3 = _out_s3 & !((in_1[i_0]));
  }
  if (!(_out_s3)) {
    bool * _tt7= new bool [4]; 
    bool _tt8[4] = {1, 0, 0, 0};
    CopyArr<bool >(_out,bitwise(logical_or<bool>(), _tt7, 4, _out, 4, _tt8, 4), 4, 4);
    delete[] _tt7;
  }
  delete[] in;
  delete[] _tt0;
  delete[] in_0_0;
  delete[] _tt5;
  delete[] in_1;
  return;
}
void slog2(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  CopyArr<bool >(_out,0, 4);
  bool*  ONE= new bool [4]; CopyArr<bool >(ONE,0, 4);
  (ONE[0]) = 1;
  bool  done=0;
  for (int  i=3;(i) > (0);i = i - 1){
    if (!(done) && (((in[i])) == (0))) ; else {
      done = 1;
      bool* _tt9= new bool [4]; 
      CopyArr<bool >(_out,SumArr(_tt9, 4, _out, 4, ONE, 4), 4, 4);
    }
  }
  delete[] ONE;
  return;
}

}
