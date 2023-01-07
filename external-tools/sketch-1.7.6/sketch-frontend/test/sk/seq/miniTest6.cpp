#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest6.h"
namespace ANONYMOUS{

void reverseSketch(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool* _tt0= new bool [4]; 
  bool* _tt1= new bool [4]; 
  bool _tt2[4] = {0, 1, 0, 0};
  CopyArr<bool >(_out,SumArr(_tt0, 4, SumArr(_tt1, 4, in, 4, _tt2, 4), 4, in, 4), 4, 4);
  delete[] _tt0;
  delete[] _tt1;
  return;
}
void reverse(bool* in/* len = 4 */, bool* _out/* len = 4 */) {
  bool _tt3[4] = {0, 1, 0, 0};
  bool*  tmp= new bool [4]; CopyArr<bool >(tmp,_tt3, 4, 4);
  bool* _tt4= new bool [4]; 
  bool* _tt5= new bool [4]; 
  CopyArr<bool >(_out,SumArr(_tt4, 4, SumArr(_tt5, 4, in, 4, tmp, 4), 4, in, 4), 4, 4);
  delete[] tmp;
  delete[] _tt4;
  delete[] _tt5;
  return;
}

}
