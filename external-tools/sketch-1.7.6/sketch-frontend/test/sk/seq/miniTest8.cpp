#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest8.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt0[4] = {1, 1, 0, 0};
  bool*  tmp= new bool [4]; CopyArr<bool >(tmp,_tt0, 4, 4);
  bool*  in1= new bool [4]; CopyArr<bool >(in1,in, 4, 4);
  bool*  _out_s1= new bool [4]; CopyArr<bool >(_out_s1,0, 4);
  for (int  i=0;(i) < (4);i = i + 1){
    if (((tmp[i])) == (1)) {
      bool* _tt1= new bool [4]; 
      CopyArr<bool >(_out_s1,SumArr(_tt1, 4, _out_s1, 4, in1, 4), 4, 4);
      delete[] _tt1;
    }
    bool * _tt2= new bool [4]; CopyArr<bool >(_tt2,in1, 4, 4); 
    CopyArr<bool >(in1,shL(_tt2, 4, 1), 4, 4);
  }
  CopyArr<bool >(_out,_out_s1, 4, 4);
  delete[] tmp;
  delete[] in1;
  delete[] _out_s1;
  return;
}
void reverse(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool* _tt3= new bool [4]; 
  bool* _tt4= new bool [4]; 
  CopyArr<bool >(_out,SumArr(_tt3, 4, SumArr(_tt4, 4, in, 4, in, 4), 4, in, 4), 4, 4);
  delete[] _tt3;
  delete[] _tt4;
  return;
}

}
