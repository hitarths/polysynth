#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "miniTest26.h"
namespace ANONYMOUS{

void miniTestSK(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt0[2] = {0, 0};
  bool*  one= new bool [2]; CopyArr<bool >(one,_tt0, 2, 2);
  (one[0]) = 1;
  bool * _tt1= new bool [3]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt1, 3, in, 3, one, 2), 3, 3);
  delete[] one;
  delete[] _tt1;
  return;
}
void miniTest(bool* in/* len = 3 */, bool* _out/* len = 3 */) {
  bool _tt2[2] = {0, 0};
  bool*  one= new bool [2]; CopyArr<bool >(one,_tt2, 2, 2);
  (one[0]) = 1;
  bool * _tt3= new bool [3]; 
  CopyArr<bool >(_out,bitwise(not_equal_to<bool>(), _tt3, 3, in, 3, one, 2), 3, 3);
  delete[] one;
  delete[] _tt3;
  return;
}

}
